#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int> &x, const vector<int> &y) -> bool {
           return x[1] < y[1];
        });
        int pre_end = INT32_MIN, selected = 0;
        for (auto & interval : intervals) {
            if (interval[0] >= pre_end) {
                ++selected;
                pre_end = interval[1];
            }
        }
        return static_cast<int>(intervals.size()) - selected;
    }
};
int main() {
    Solution solution;
    vector<vector<int>> intervals{{1, 2}, {2, 3}, {3, 4}, {-100, -2}, {5, 7}};
    cout << solution.eraseOverlapIntervals(intervals) << endl;
    return 0;
}