//
// Created by lemon on 2022/3/3.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        vector<int> next = get_next(needle);
        int i = 0, j = 0, h_sz = static_cast<int>(haystack.size()), n_sz = static_cast<int>(needle.size());
        
        while (i < h_sz && j < n_sz) {
            if (j == -1 || haystack[i] == needle[j]) {
                ++i;
                ++j;   
            } else {
                j = next[j];
            }
        }
        if (j == n_sz) return i - j;
        else return -1;
    }
private:
    vector<int> get_next(string &needle) {
        int pre = -1, after = 0, sz = static_cast<int>(needle.size());
        vector<int> next(sz + 1, -1);
        while (after < sz - 1) {
            if (pre == -1 || needle[pre] == needle[after]) {
                ++pre;
                ++after;
                if (needle[pre] != needle[after]) {
                    next[after] = pre;
                } else {
                    next[after] = next[pre];
                }
            } else {
                pre = next[pre];
            }
        }
        return next;
    }
};

int main(int argc, const char** argv) {
    return 0;
}