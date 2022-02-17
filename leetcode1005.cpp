//
// Created by lemon on 2022/2/17.
//

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <numeric>
using namespace std;
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sz = static_cast<int>(nums.size()), min_num = INT32_MAX, min_idx = 0;
        for (int i = 0; i < sz; ++i) {
            if (k > 0 && nums[i] < 0) {
                nums[i] = -nums[i];
                --k;
            }
            if (nums[i] < min_num) {
                min_num = nums[i];
                min_idx = i;
            }
        }
        if (k % 2 == 1) nums[min_idx] = -nums[min_idx];
        return accumulate(nums.cbegin(), nums.cend(), 0);
    }
};
int main() {
    return 0;
}