//
// Created by lemon on 2022/2/18.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string minNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](const int &x, const int &y) -> bool {
            string xs = to_string(x), ys = to_string(y);
            return xs + ys < ys + xs;
        });
        string res;
        for (const auto &num : nums) res += to_string(num);
        return res;
    }
};
int main() {
    return 0;
}