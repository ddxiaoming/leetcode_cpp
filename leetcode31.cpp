#include <iostream>
#include <vector>
#include "tools/tools.hpp"
#include <algorithm>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int sz = static_cast<int>(nums.size()), smallIdx = sz - 2, bigIdx = sz - 1;
        while (smallIdx >= 0 && nums[smallIdx] >= nums[smallIdx + 1]) --smallIdx;
        if (smallIdx >= 0) {
            while (bigIdx >= 0 && nums[smallIdx] >= nums[bigIdx]) --bigIdx;
            swap(nums[smallIdx], nums[bigIdx]);
        }
        reverse(nums.begin() + smallIdx + 1, nums.end());
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
