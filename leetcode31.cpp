#include <iostream>
#include <vector>
#include "tools/tools.hpp"
#include <algorithm>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int sz = static_cast<int>(nums.size());
        if (sz == 1) return;
        for (int i = sz - 2; i >= 0; --i) {
            if (nums[i] < nums[i + 1]) {
                swap(nums[i], nums[i + 1]);
                return;
            }
        }
        reverse(nums.begin(), nums.end());
    }
};

int	main(int argc, char **argv) {
    Solution solution;
    vector<int> nums{1, 2, 3};
    solution.nextPermutation(nums);
    log(nums);

    nums = {3, 2, 1};
    solution.nextPermutation(nums);
    log(nums);
    return 0;
}
