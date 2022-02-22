//
// Created by lemon on 2022/2/22.
//
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), [](const vector<int> &x, const vector<int> &y) -> bool {
            if (x[0] == y[0]) return x[1] < y[1];
            return x[0] > y[0];
        });
        vector<vector<int>> res;
        for (const vector<int> v : people) {
            res.insert(res.begin() + v[1], v);
        }
        return res;
    }
};
int main() {

}