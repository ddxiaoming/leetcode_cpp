#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int sz = static_cast<int>(nums.size()), left = 0, right = sz - 1;
        while (left < right) {
            if (nums[left] % 2 == 1) {
                ++left;
            } else {
                swap(nums[left], nums[right]);
                --right;
            }
        }
        return nums;
    }
};

int	main(int argc, char **argv) {
    return 0;
}
