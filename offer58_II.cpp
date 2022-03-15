#include <iostream>
using namespace std;
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        s.append(s.cbegin(), s.cbegin() + n).erase(s.cbegin(), s.cbegin() + n);
        return s;
    }
};
int main(int argc, char **argv) {
    Solution solution;
    cout << solution.reverseLeftWords("abcdefg", 2) << endl;
    return 0;
}