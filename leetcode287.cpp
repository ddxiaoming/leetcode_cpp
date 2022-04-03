#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = 0, slow = 0;
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (fast != slow);
        fast = 0;
        while (fast != slow) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};

int main(int argc, char **argv) {
    Solution solution;
    vector<int> nums{1, 3, 4, 2, 2};
    cout << solution.findDuplicate(nums) << endl;

    nums = {3, 1, 3, 4, 2};
    cout << solution.findDuplicate(nums) << endl;
}