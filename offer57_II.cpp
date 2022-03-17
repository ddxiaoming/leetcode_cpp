#include <vector>
#include <iostream>
#include <cmath>
#include <deque>
using namespace std;
class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        int tmpSum = 0, end = (target + 1) / 2;
        vector<vector<int>> res;
        deque<int> tmpVec;
        for (int right = 1; right < end; ++right) {
            tmpSum += right;
            tmpVec.push_back(right);
            while (tmpSum >= target) {
                if (tmpSum == target) {
                    res.emplace_back(tmpVec.begin(), tmpVec.end());
                }
                tmpSum -= tmpVec.front();
                tmpVec.pop_front();
            }
        }
        return res;
    }
};
