//
// Created by lemon on 22-4-29.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (target == nums[mid]) return mid;
            else if (target < nums[mid]) right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }
};
int main(int argc, char **argv) {
    return 0;
}