//
// Created by lemon on 2022/2/18.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const vector<int> &x, const vector<int> &y) -> bool {
           return x[1] < y[1];
        });
        int pre = points[0][1];// 第一支箭设在第一个气球的尾巴上
        int res = 1;
        for (auto i = 1; i < points.size(); ++i) {
            if (points[i][0] > pre) {
                pre = points[i][1]; // 重新设一支箭
                ++res;
            }
        }
        return res;
    }
};
int main() {
    return 0;
}