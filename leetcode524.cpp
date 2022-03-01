#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        sort(dictionary.begin(), dictionary.end(), [](const string &x, const string &y) -> bool {
            if (x.length() == y.length()) return x < y;
            return x.length() > y.length();
        });
        for (const string &dict : dictionary) {
            int ps = 0, pd = 0;
            while (ps < s.length() && pd < dict.length()) {
                if (s[ps] == dict[pd]) {
                    ++ps;
                    ++pd;
                } else {
                    ++ps;
                }
            }
            if (pd == dict.length()) return dict;
        }
        return "";
    }
};

int main() {
    return 0;
}