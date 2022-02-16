//
// Created by lemon on 2022/2/15.
//

#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end(), greater<>());
        sort(s.begin(), s.end(), greater<>());
        int g_sz = static_cast<int>(g.size()), s_sz = static_cast<int>(s.size());
        int res = 0, i = 0, j = 0;
        while (i < g_sz && j < s_sz) {
            if (g[i] <= s[j]) {
                ++j;
                ++res;
            }
            ++i;
        }
        return res;
    }
};
int main() {
    Solution solution;

    return 0;
}