#include <iostream>
using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
        string res;
        for (const char c : num) {
            while (k > 0 && !res.empty() && res.back() > c) {
                res.pop_back();
                --k;
            }
            res.push_back(c);
        }

        while (k > 0) {
            res.pop_back();
            --k;
        }

        // 处理前导0
        while (res.front() == '0') res.erase(res.begin());
        return res.empty() ? "0" : res;
    }
};
int main() {
    return 0;
}
