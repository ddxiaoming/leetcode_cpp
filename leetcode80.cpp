#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sz = static_cast<int>(nums.size());
        if (sz <= 2) return sz;
        int pos = 2;
        for (int i = 2; i < sz; ++i) {
            if (nums[i] != nums[pos - 2]) {
                nums[pos++] = nums[i];
            }
        }
        return pos;
    }
};
int main(int argc, char **argv) {

}