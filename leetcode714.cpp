//
// Created by lemon on 2022/2/10.
//
#include <iostream>
#include <vector>
using namespace std;
/**
 * 动态规划
 */
//class Solution {
//public:
//    int maxProfit(vector<int>& prices, int fee) {
//        if (prices.empty()) return 0;
//        int sz{static_cast<int>(prices.size())};
//        vector<vector<int>> dp(sz, vector<int>(2));
//        dp[0][0] = 0; dp[0][1] = -prices[0];
//        for (int i = 1; i < sz; ++i) {
//            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i] - fee);
//            dp[i][1] = max(dp[i - 1][0] - prices[i], dp[i - 1][1]);
//        }
//        return dp[sz - 1][0];
//    }
//};

/**
 * 贪心
 */
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        if (prices.empty()) return 0;
        int sz{static_cast<int>(prices.size())}, res{0};
        int min_buy{prices[0] + fee};
        for (int i = 1; i < sz; ++i) {
            min_buy = min(min_buy, prices[i] + fee);
            if (prices[i] - min_buy > 0) {
                // 今天卖出有利可图
                res += prices[i] - min_buy;
                // 立即获得免除手续费购买这只股票的权力
                min_buy = prices[i];
            }
        }
        return res;
    }
};

int main() {

}
