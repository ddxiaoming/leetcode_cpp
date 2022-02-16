//
// Created by lemon on 2022/2/16.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int i = 0, sz = static_cast<int>(gas.size());
        while (i < sz) {
            // 检查从当前加油站出发，能否环绕一圈。如果不能，求出最后一个无法到达的加油站
            int gas_sum = 0, cost_sum = 0, step = 0;
            while (step < sz) {
                int idx = (i + step) % sz;
                gas_sum += gas[idx];
                cost_sum += cost[idx];
                // 环绕一圈需要走sz步，判断第step步能不能走
                if (gas_sum < cost_sum) break;
                ++step;
            }
            if (step == sz) return i;
            i = i + step + 1;
        }
        return -1;
    }
};
int main() {
    return 0;
}