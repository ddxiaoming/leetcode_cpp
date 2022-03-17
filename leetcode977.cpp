#include <vector>
#include <algorithm>
#include "tools/tools.hpp"
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int sz = static_cast<int>(nums.size()), left = 0, right = 0;
        for (; right < sz; ++right) {
            if (nums[right] >= 0) break;
        }
        left = right - 1;
        vector<int> res;
        while (left >= 0 || right < sz) {
            int x = left >= 0 ? nums[left] * nums[left] : __INT32_MAX__;
            int y = right < sz ? nums[right] * nums[right] : __INT32_MAX__;
            if (x <= y) {
                --left;
                res.push_back(x);
            } else {
                ++right;
                res.push_back(y);
            }
        }
        return res;
    }
};

int	main(int argc, char **argv) {
    Solution solution;
    vector<int> nums{-4,-1,0,3,10};
    vector<int> res = solution.sortedSquares(nums);
    log(res);

    nums = {-7,-3,2,3,11};
    res = solution.sortedSquares(nums);
    log(res);
    return 0;
}
