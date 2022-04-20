#include <vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {lower_bound(nums, target), upper_bound(nums, target)};
    }

private:
    // 寻找左边界
    int lower_bound(vector<int> &nums, int target) {
        int left = 0, right = static_cast<int>(nums.size()) - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] >= target) right = mid - 1;
            else left = mid + 1;
        }
        return (right + 1 < nums.size() && nums[right + 1] == target) ? right + 1 : -1;
    }

    // 寻找右边界
    int upper_bound(vector<int> &nums, int target) {
        int left = 0, right = static_cast<int>(nums.size()) - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] <= target) left = mid + 1;
            else right = mid - 1;
        }
        return (left - 1 >= 0 && nums[left - 1] == target) ? left - 1 : -1;
    }
};

int main(int argc, char **argv) {
}