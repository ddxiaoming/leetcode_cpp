//
// Created by lemon on 2022/2/22.
//
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0, right = static_cast<int>(s.size()) - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return isPalindrome(s, left + 1, right)
                || isPalindrome(s, left, right - 1);
            }
            ++left;--right;
        }
        return true;
    }

private:
    bool isPalindrome(string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            ++left;--right;
        }
        return true;
    }
};
int main() {

}
