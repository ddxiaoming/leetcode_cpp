//
// Created by lemon on 2022/3/3.
//
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int sz = static_cast<int>(nums.size());
        sort(nums.begin(), nums.end());
        for (int i = 0; i < sz; ++i) {
            // 防止重复项
            if (i >= 0 && nums[i - 1] == nums[i]) continue;
            // 这样内层就变成了双指针的问题
            int target = -nums[i], left = i + 1, right = sz - 1;
            while (left < right) {
                // 防止重复项
                if (left > i + 1 && nums[left - 1] == nums[left]) {
                    ++left;
                    continue;
                }
                if (right < sz - 1 && nums[right + 1] == nums[right]) {
                    --right;
                    continue;
                }
                if (nums[left] + nums[right] == target) {
                    res.push_back({nums[i], nums[left++], nums[right--]});
                } else if (nums[left] + nums[right] < target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
        return res;
    }
};
int main() {
    return 0;
}