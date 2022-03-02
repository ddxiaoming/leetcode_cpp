//
// Created by lemon on 2022/2/8.
//

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> ori(nums.cbegin(), nums.cend());
        sort(nums.begin(), nums.end(), less<>());
        int sz = static_cast<int>(nums.size()), left = 0, right = sz - 1;
        while (left <= right && nums[left] == ori[left]) ++left;
        while (left <= right && nums[right] == ori[right]) --right;
        return right - left + 1;
    }
};
int main() {
    Solution solution;
    vector<int> nums{2, 6, 4, 8, 10, 9, 15};
    cout << solution.findUnsortedSubarray(nums) << endl;

    nums = {1, 2, 3, 4};
    cout << solution.findUnsortedSubarray(nums) << endl;

    nums = {1};
    cout << solution.findUnsortedSubarray(nums) << endl;
    return 0;
}
