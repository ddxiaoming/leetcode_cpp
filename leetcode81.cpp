#include <vector>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = static_cast<int>(nums.size()) - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) return true;
            if (nums[left] == nums[mid]) { // 无法判断哪一边是有序的
                ++left;
            } else if (nums[mid] <= nums[right]) { // 右半部分[mid + 1, right]是有序的
                if (nums[mid] < target && target <= nums[right]) left = mid + 1;
                else right = mid - 1;
            } else { // 左半部分[left, mid - 1]是有序的
                if (nums[mid] > target && target >= nums[left]) right = mid - 1;
                else left = mid + 1;
            }
        }
        return false;
    }
};
int main(int argc, char **argv) {
    return 0;
}