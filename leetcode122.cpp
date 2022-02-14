//
// Created by lemon on 2022/2/14.
//
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0, sz = static_cast<int>(prices.size());
        for (int i = 1; i < sz; ++i) {
            int diff = prices[i] - prices[i - 1];
            if (diff > 0) res += diff;
        }
        return res;
    }
};
int main() {
    return 0;
}