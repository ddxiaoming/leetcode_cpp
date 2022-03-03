#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = static_cast<int>(nums.size()), pos = 0;
        for (int i = 0; i < sz; ++i) {
            if (nums[i] != 0) {
                swap(nums[pos++], nums[i]);
            }
        }
    }
};
int main() {
    return 0;
}