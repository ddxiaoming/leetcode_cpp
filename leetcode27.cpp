#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int place = 0, len = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[place++] = nums[i];
                len++;
            }
        }
        return len;
    }
};
int main(int argc, const char** argv) {
    return 0;
}