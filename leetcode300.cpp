#include <vector>
#include <algorithm>
#include <deque>
#include <iostream>

using namespace std;

// 动态规划
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        const unsigned long sz = nums.size();
        vector<int> dp(sz);
        for (int i = 0; i < sz; ++i) {
            dp[i] = 1;
            for (int j = 0; j < i; ++j) {
                if (nums[j] < nums[i]) dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
        return *max_element(dp.cbegin(), dp.cend());
    }
};

int main(int argc, char **argv) {
    vector<int> nums {4, 10, 4, 3, 8, 9};
    Solution solution;
    cout << solution.lengthOfLIS(nums) << endl;
}