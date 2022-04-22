#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = static_cast<int>(nums.size()) - 1;
        while (left < right) {
            int mid = (left + right) / 2;
            if (nums[mid] == nums[mid ^ 1]) left = mid + 1;
            else right = mid;
        }
        return nums[left];
    }
};
int main(int argc, char **argv) {
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    Solution solution;
    cout << solution.singleNonDuplicate(nums) << endl;
    nums = {3, 3, 7, 7, 10, 11, 11};
    cout << solution.singleNonDuplicate(nums) << endl;
    nums = {1, 7, 7, 11, 11};
    cout << solution.singleNonDuplicate(nums) << endl;
    nums = {7, 7, 11, 11, 13};
    cout << solution.singleNonDuplicate(nums) << endl;
}