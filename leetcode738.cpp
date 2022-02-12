//
// Created by lemon on 2022/2/12.
//
#include <iostream>
using namespace std;
class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s{to_string(n)};
        int max_num{0}, max_idx{-1}, sz{static_cast<int>(s.size())};
        for (int i = 0; i < sz - 1; ++i) {
            if (max_num < s[i]) {
                max_num = s[i];
                max_idx = i;
            }
            if (s[i] > s[i + 1]) {
                s[max_idx] -= 1;
                for (max_idx += 1; max_idx < sz; ++max_idx) {
                    s[max_idx] = '9';
                }
            }
        }
        return stoi(s);
    }
};
int main() {
    return 0;
}
