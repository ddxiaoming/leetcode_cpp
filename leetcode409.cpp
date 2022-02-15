//
// Created by lemon on 2022/2/15.
//

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        int res = 0;
        unordered_map<char, int> counts;
        for (const char &c : s) {
            ++counts[c];
            if (counts[c] == 2) {
                counts[c] = 0;
                res += 2;
            }
        }
        for (const auto &item : counts) {
            if (item.second == 1) {
                ++res;
                break;
            }
        }
        return res;
    }
};
int main() {
    Solution solution;
    string s{"abccccdd"};
    cout << solution.longestPalindrome(s) << endl;

    s = "a";
    cout << solution.longestPalindrome(s) << endl;

    s = "bb";
    cout << solution.longestPalindrome(s) << endl;
    return 0;
}