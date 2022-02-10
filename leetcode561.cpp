//
// Created by lemon on 2022/2/10.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sz = static_cast<int>(nums.size()), res = 0;
        for (int i = 0; i < sz; i += 2) {
            res += nums[i];
        }
        return res;
    }
};
int main() {
    Solution solution;
    vector<int> nums{1, 4, 3, 2};
    cout << solution.arrayPairSum(nums) << endl;

    nums = {6, 2, 6, 5, 1, 2};
    cout << solution.arrayPairSum(nums) << endl;
    return 0;
}

