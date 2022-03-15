#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int count = 0, len = static_cast<int>(nums.size());
        int start = 0;
        k = k % len;
        while (count < len) {
            int cur = start;
            int tmp = nums[cur];
            do {
                swap(tmp, nums[(cur + k) % len]);
                cur = (cur + k) % len;
                ++count;
            } while (cur != start);
            ++start;
        }
    }
};

int	main(int argc, char **argv) {
    vector<int> nums {-1,-100,3,99};
    Solution solution;
    solution.rotate(nums, 2);
    return 0;
}
