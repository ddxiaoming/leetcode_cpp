//
// Created by lemon on 2022/2/15.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int start = 0, end = 0, sz = static_cast<int>(nums.size()), step = 0;
        while (end < sz - 1) {
            // 进行一次跳跃
            ++step;
            // 寻找落脚点的范围
            int max_pos = 0;
            for (int i = start; i <= end; ++i) {
                max_pos = max(max_pos, nums[i] + i);
            }
            // 设置当前落脚点的范围，作为下一次起跳的起点
            start = end + 1;
            end = max_pos;
        }
        return step;
    }
};

int main() {
    return 0;
}