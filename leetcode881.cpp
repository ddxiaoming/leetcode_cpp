//
// Created by lemon on 2022/2/13.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int sz = static_cast<int>(people.size()), left = 0, right = sz - 1, res = 0;
        while (left <= right) {
            if (people[left] + people[right] <= limit) {
                ++left;
                --right;
            } else {
                --right;
            }
            ++res;
        }
        return res;
    }
};

int main() {
    Solution solution;
    vector<int> people{5, 1, 4, 2};
    cout << solution.numRescueBoats(people, 6) << endl;
    return 0;
}
