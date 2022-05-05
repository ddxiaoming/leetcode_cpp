#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int res = 0;
        sort(arr2.begin(), arr2.end(), [](const int x, const int y) -> bool {
            return abs(x) < abs(y);
        });
        for (const int arr: arr1) {
            if (abs(arr - arr2[0]) > d) ++res;
        }
        return res;
    }
};

int main(int argc, char **argv) {

}