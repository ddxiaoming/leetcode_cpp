#include <iostream>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int sz = static_cast<int>(s.size());
        int left = sz - 1, right = sz - 1;
        string res;
        while (left >= 0 && right >= 0) {
            // 跳过空格
            while (left >= 0 && s[left] == ' ') --left;
            right = left;
            if (right < 0) break;
            // 切割单词
            while (left >= 0 && s[left] != ' ') --left;
            res += s.substr(left + 1, right - left);
            res += " ";
        }
        if (!res.empty() && res.back() == ' ') res.pop_back();
        return res;
    }
};

int main(int argc, char **argv) {
    string s = "  hello world!  ";
    Solution solution;
    cout << solution.reverseWords(s) << endl;
}