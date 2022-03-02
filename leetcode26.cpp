#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int place = 1, len = 1; // 下一个字符应当放置的位置
        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[place - 1]) {
                nums[place++] = nums[i];
                ++len;
            }
        }
        return len;
    }
};
// 秀肌肉的解法
class Solution2 {
public:
    int removeDuplicates(vector<int>& nums) {
        return unique(nums.begin(), nums.end()) - nums.begin();
    }
};
void log(vector<int> &numbers) {
    cout << "[";
    for (auto i = 0; i < numbers.size(); ++i) {
        if (i == numbers.size() - 1) cout << numbers[i];
        else cout << numbers[i] << ", ";
    }
    cout << "]" << endl;
}
int main(int argc, char const *argv[])
{
    Solution solution;
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    cout << solution.removeDuplicates(nums) << endl;
    log(nums);
    return 0;
}
