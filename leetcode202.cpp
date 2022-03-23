#include <iostream>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        int fast = n, slow = n;
        while (true) {
            fast = getNext(fast);
            fast = getNext(fast);
            slow = getNext(slow);
            if (fast == 1) return true;
            if (fast == slow) return false;
        }
    }
private:
    int getNext(int n) {
        int res = 0;
        while (n > 0) {
            int mod = n % 10;
            res += mod * mod;
            n = n / 10;
        }
        return res;
    }
};

int	main(int argc, char **argv)
{
    Solution solution;
    cout << boolalpha << solution.isHappy(2) << endl;
    return 0;
}
