#include <iostream>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x, ans = -1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if ((long) mid * (long) mid <= (long) x) {
                left = mid + 1;
                ans = mid;
            } else {
                right = mid - 1;
            }
        }
        return ans;
    }
};
int main(int argc, char **argv) {
}
