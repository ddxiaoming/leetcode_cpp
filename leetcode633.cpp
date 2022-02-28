#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long lc = static_cast<long long>(c);
        int left = 0, right = sqrt(c);
        while (left <= right) {
            long long tmp = static_cast<long long>(left * left) + static_cast<long long>(right * right);
            if (tmp == lc) return true;
            else if (tmp < lc) ++left;
            else --right;            
        }
        return false;
    }
};
int main() {
    Solution solution;
    cout << boolalpha << solution.judgeSquareSum(5) << endl;
    cout << solution.judgeSquareSum(3) << endl;
}