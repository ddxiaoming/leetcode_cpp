#include <iostream>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string tmp_s, tmp_t;
        for (const char c : s) {
            if (c == '#') {
                if (!tmp_s.empty()) tmp_s.pop_back();
            } else {
                tmp_s.push_back(c);
            }
        }
        for (const char c : t) {
            if (c == '#') {
                if (!tmp_t.empty()) tmp_t.pop_back();
            } else {
                tmp_t.push_back(c);
            }
        }
        return tmp_s == tmp_t;
    }
};
int main(int argc, char **argv) {

}