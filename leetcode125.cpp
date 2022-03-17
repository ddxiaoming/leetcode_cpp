#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = static_cast<int>(s.size()) - 1;
        while (left < right) {
            if (!(isdigit(s[left]) || isalpha(s[left]))) {
                ++left;
            } else if (!(isdigit(s[right]) || isalpha(s[right]))) {
                --right;
            } else if (tolower(s[left]) == tolower(s[right])) {
                ++left;
                --right;
            } else {
                return false;
            }
        }
        return true;
    }
};