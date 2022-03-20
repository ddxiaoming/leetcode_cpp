#include <iostream>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string res;
        int sz = static_cast<int>(s.size());
        int left = 0, right = sz - 1;
        while (right >= 0) {
            if (s[right] != ' ' && (right == sz - 1 || s[right + 1] == ' ')) {
                int left = right;
                while (left > 0 && s[left - 1] != ' ') --left;
                res += s.substr(left, right - left + 1) + " ";
                right = left - 1;
            } else {
                --right;
            }
        }
        res.pop_back();
        return res;
    }
};

int	main(int argc, char **argv) {
    Solution solution;
    string s = "the sky is blue";
    cout << solution.reverseWords(s) << endl;
    s = "  hello world  ";
    cout << solution.reverseWords(s) << endl;

    s = "a good   example";
    cout << solution.reverseWords(s) << endl;

    s = "F R  I   E    N     D      S      ";
    cout << solution.reverseWords(s) << endl;
    return 0;
}
