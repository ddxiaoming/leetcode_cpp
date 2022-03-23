#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sz = static_cast<int>(nums.size());
        int res = 0, diff = INT32_MAX;
        sort(nums.begin(), nums.end());
        for (int first = 0; first < sz; ++first) {
            int second = first + 1, third = sz - 1;
            while (second < third) {
                int sum = nums[first] + nums[second] + nums[third];
                int cdiff = abs(sum - target);
                if (cdiff < diff) {
                    diff = cdiff;
                    res = sum;
                }
                if (sum < target) ++second;
                else if (sum > target) --third;
                else return target;
            }
        }
        return res;
    }
};

int	main(int argc, char **argv) {
    return 0;
}
