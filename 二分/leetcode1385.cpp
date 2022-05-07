#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int arr2_sz = static_cast<int>(arr2.size()) - 1;
        int res = 0;
        for (const int arr : arr1) {
            auto greater_equal = lower_bound(arr2.cbegin(), arr2.cend(), arr);
            if (greater_equal == arr2.end()) {
                res += (arr - arr2[arr2_sz]) > d;
            } else {
                bool ok = (arr2[greater_equal - arr2.cbegin()] - arr) > d;
                if (greater_equal - arr2.cbegin() - 1 >= 0) ok &= (arr - arr2[greater_equal - arr2.cbegin() - 1]) > d;
                res += ok;
            }
        }
        return res;
    }
};

int main(int argc, char **argv) {

}