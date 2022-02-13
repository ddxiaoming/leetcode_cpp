//
// Created by lemon on 2022/2/13.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int row = static_cast<int>(grid.size()), col = static_cast<int>(grid[0].size());
        vector<int> north(col, 0), west(row, 0);
        // 初始化天际线
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                west[i] = max(west[i], grid[i][j]);
                north[j] = max(north[j], grid[i][j]);
            }
        }

        // 计算增量
        int res = 0;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                res += min(west[i], north[j]) - grid[i][j];
            }
        }
        return res;
    }
};
int main() {
    return 0;
}