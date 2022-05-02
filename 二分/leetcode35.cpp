#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = static_cast<int>(nums.size()) - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return left;
    }
};
int main(int argc, char **argv) {
    vector<int> nums{1, 3, 5, 6};
    Solution solution;
    cout << solution.searchInsert(nums, 0) << endl;
    cout << solution.searchInsert(nums, 1) << endl;
    cout << solution.searchInsert(nums, 3) << endl;
    cout << solution.searchInsert(nums, 7) << endl;

    nums = {1, 3, 5};
    cout << solution.searchInsert(nums, 3) << endl;
}