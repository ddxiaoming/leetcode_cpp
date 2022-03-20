#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        auto left = s.begin(), right = s.begin();
        while (true) {
            if (right == s.end()) {
                reverse(left, right);
                break;
            } else if (*right == ' ') {
                reverse(left, right);
                left = right + 1;
            }
            ++right;
        }
        return s;
    }
};

int	main(int argc, char **argv) {
    Solution solution;
    string s = "Let's take LeetCode contest";
    cout << solution.reverseWords(s) << endl;

    s = "God Ding";
    cout << solution.reverseWords(s) << endl;
    
    return 0;
}
