//
// Created by lemon on 2022/2/17.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string largestNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end(), [](const int x, const int y) -> bool {
            string xs = to_string(x);
            string ys = to_string(y);
            return xs + ys > ys + xs;
        });
        string res;
        if (nums[0] == 0) return "0";
        for_each(nums.begin(), nums.end(), [&res](const int x) -> void {
            res += to_string(x);
        });
        return res;
    }
};
int main() {
    return 0;
}