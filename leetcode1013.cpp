//
// Created by lemon on 2022/2/19.
//

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = accumulate(arr.cbegin(), arr.cend(), 0);
        int sz = static_cast<int>(arr.size());
        if (sum % 3 || sz < 3) return false;
        int target = sum / 3, current_sum = 0, i = 0;
        for (i; i < sz - 2; ++i) {
            current_sum += arr[i];
            if (current_sum == target) break;
        }
        if (i == sz - 2) return false;
        current_sum = 0;
        for (++i; i < sz - 1; ++i) {
            current_sum += arr[i];
            if (current_sum == target) break;
        }
        if (i == sz - 1) return false;
        return true;
    }
};
int main() {
    return 0;
}