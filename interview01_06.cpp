#include <iostream>
using namespace std;
class Solution {
public:
    string compressString(string S) {
        if (S.empty()) return S;
        int cnt = 0; // 当前访问的字符出现的次数
        string res;
        int sz = static_cast<int>(S.size());
        for (int i = 0; i < sz; ++i) {
            ++cnt;
            if (i == sz - 1 || S[i] != S[i + 1]) {
                res += S[i];
                res += to_string(cnt);
                cnt = 0;
            }
        }
        return res.size() < sz ? res : S;
    }
};

int main(int argc, char **argv) {
    Solution solution;
    string s = "aabcccccaaa";
    cout << solution.compressString(s) << endl;
    s = "abbccd";
    cout << solution.compressString(s) << endl;
}