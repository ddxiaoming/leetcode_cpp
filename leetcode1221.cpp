//
// Created by lemon on 2022/2/16.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0, sz = static_cast<int>(s.size()), res = 0;
        for (int i = 0; i < sz; ++i) {
            if (s[i] == 'L') ++count;
            else --count;
            if (count == 0) ++res;
        }
        return res;
    }
};
int main() {
    return 0;
}