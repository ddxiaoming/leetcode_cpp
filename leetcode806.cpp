#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> res(2, 0);
        int maxWidth = 100, curWidth = 0;
        for (const char c : s) {
            if (widths[c - 'a'] + curWidth > maxWidth) {
                curWidth = widths[c - 'a'];
                ++res[0];
            } else {
                curWidth += widths[c - 'a'];
            }
        }
        if (curWidth > 0) ++res[0];
        res[1] = curWidth;
        return res;
    }
};
int main(int argc, char **argv) {
}