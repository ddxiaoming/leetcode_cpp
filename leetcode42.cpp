#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;
        int sz = static_cast<int>(height.size());
        vector<int> left_max(sz), right_max(sz);
        left_max[0] = height[0];
        for (int i = 1; i < sz; ++i) left_max[i] = max(left_max[i - 1], height[i]);
        right_max[sz - 1] = height[sz - 1];
        for (int i = sz - 2; i >=0; --i) {
            right_max[i] = max(right_max[i + 1], height[i]);
        }

        int res = 0;
        for (int i = 1; i < sz - 1; ++i) {
            res += min(left_max[i], right_max[i]) - height[i];
        }
        return res;
    }
};

int main() {
    Solution solution;
    vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};
    cout << solution.trap(height) << endl;
    return 0;
}