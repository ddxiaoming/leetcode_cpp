//
// Created by lemon on 2022/2/9.
//
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five{0}, ten{0};
        for (const int bill : bills) {
            if (bill == 5) {
                // 直接收下
                ++five;
            } else if (bill == 10) {
                ++ten;
                if (five == 0) return false; // 找不开
                --five;
            } else {
                // 优先把10块的找出去
                if (ten > 0 && five > 0) {
                    --ten;
                    --five;
                } else if (five >= 3) {
                    five -= 3;
                } else {
                    return false; // 找不开
                }
            }
        }
        return true;
    }
};
int main() {
    vector<int> bills{5,5,5,10,20};
    Solution solution;
    cout << boolalpha << solution.lemonadeChange(bills) << endl;

    bills = {5,5,10,10,20};
    cout << solution.lemonadeChange(bills) << endl;

    bills = {5,5,10};
    cout << solution.lemonadeChange(bills) << endl;

    bills = {10,10};
    cout << solution.lemonadeChange(bills) << endl;
    return 0;
}
