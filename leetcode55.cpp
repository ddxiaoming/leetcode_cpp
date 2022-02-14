//
// Created by lemon on 2022/2/14.
//
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_pos = 0, sz = static_cast<int>(nums.size());
        for (int i = 0; i < sz; ++i) {
            if (i > max_pos) return false;
            if (max_pos >= sz - 1) return true;
            max_pos = max(max_pos, nums[i] + i);
        }
        return true;
    }
};
int main() {
    Solution solution;
    vector<int> nums{1,1,2,2,0,1,1};
    cout << solution.canJump(nums) << endl;

    nums = {5,9,3,2,1,0,2,3,3,1,0,0};
    return 0;
}