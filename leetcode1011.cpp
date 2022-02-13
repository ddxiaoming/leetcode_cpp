//
// Created by lemon on 2022/2/13.
//
#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>
using namespace std;
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.cbegin(), weights.cend());
        int right = accumulate(weights.cbegin(), weights.cend(), 0);
        int sz = static_cast<int>(weights.size());
        while (left <= right) {
            int mid = (left + right) / 2;
            // 给定运载能力 mid，需要多少天能运完
            int need_days = 0, weight = 0;
            for (int i = 0; i < sz; ++i) {
                weight += weights[i];
                if (i == sz - 1 || weight + weights[i + 1] > mid) {
                    weight = 0;
                    ++need_days;
                }
            }
            if (need_days <= days) right = mid - 1;
            else left = mid + 1;
        }
        return left;
    }
};
int main() {
    Solution solution;
    vector<int> weights{1, 2, 3, 1, 1};
    cout << solution.shipWithinDays(weights, 4) << endl;

    weights = {10,50,100,100,50,100,100,100};
    cout << solution.shipWithinDays(weights, 5) << endl;
}

