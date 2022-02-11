//
// Created by lemon on 2022/2/11.
//
#include <vector>
#include <unordered_map>
#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int res = 0;
        unordered_map<int, int> count_map;
        for (const int answer : answers) {
            ++count_map[answer];
        }
        for (const pair<const int, int> &item : count_map) {
            int x = item.second, y = item.first;
            res += (x + y) / (y + 1) * (y + 1);
        }
        return res;
    }
};
int main() {
    Solution solution;
    vector<int> answers{1, 1, 2};
    cout << solution.numRabbits(answers) << endl;

    answers = {10, 10, 10};
    cout << solution.numRabbits(answers) << endl;

    answers = {1, 0, 1, 0, 0};
    cout << solution.numRabbits(answers) << endl;

    answers = {0, 0, 1, 1, 1};
    cout << solution.numRabbits(answers) << endl;
    return 0;
}
