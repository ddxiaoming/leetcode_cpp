#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int sz = static_cast<int>(nums.size());
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int a = 0; a < sz; ++a) {
            if (a > 0 && nums[a] == nums[a - 1]) continue;
            for (int b = a + 1; b < sz; ++b) {
                if (b > a + 1 && nums[b] == nums[b - 1]) continue;
                int c = b + 1, d = sz - 1;
                int tmp_target = target - nums[a] - nums[b];
                while (c < d) {
                    if (c > b + 1 && nums[c] == nums[c - 1]) {
                        ++c;
                        continue;
                    }
                    if (d + 1 < sz && nums[d] == nums[d + 1]) {
                        --d;
                        continue;
                    }
                    if (nums[c] + nums[d] == tmp_target) {
                        res.push_back({nums[a], nums[b], nums[c], nums[d]});
                        ++c;--d;
                    } else if (nums[c] + nums[d] < tmp_target) {
                        ++c;
                    } else {
                        --d;
                    }
                }
            }
        }
        return res;
    }
};

int	main(int argc, char **argv) {
    Solution solution;
    vector<int> nums{1,0,-1,0,-2,2};
    int target = 0;
    solution.fourSum(nums, target);

    return 0;
}
