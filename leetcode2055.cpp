#include <iostream>
#include <vector>
#include <gnu/libc-version.h>
#include <list>
using namespace std;

class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int sz = static_cast<int>(s.size());
        vector<int> left(sz, -1), right(sz, -1), pre_sum(sz, 0), res;
        pre_sum[0] = s[0] == '*';
        for (int i = 1; i < sz; ++i) {
            pre_sum[i] = pre_sum[i - 1] + (s[i] == '*');
            left[i] = s[i] == '|' ? i : left[i - 1];
        }
        for (int i = sz - 2; i >= 0; --i) {
            right[i] = s[i] == '|' ? i : right[i + 1];
        }

        for (const auto &query : queries) {
            int left_idx = right[query[0]], right_idx = left[query[1]];
            res.push_back((left_idx == -1 || right_idx == -1 || left_idx >= right_idx) ? 0 : pre_sum[right_idx] - pre_sum[left_idx]);
        }
        return res;
    }
};
void log(vector<int> &numbers) {
    cout << "[";
    for (auto i = 0; i < numbers.size(); ++i) {
        if (i == numbers.size() - 1) cout << numbers[i];
        else cout << numbers[i] << ", ";
    }
    cout << "]" << endl;
}
int	main(int argc, char **argv) {
    Solution solution;
    vector<vector<int>> queries{{2, 5}, {5, 9}};
    string s = "**|**|***|";
    vector<int> res = solution.platesBetweenCandles(s, queries);
    log(res);

    s = "***|**|*****|**||**|*";
    queries = {{1, 17}, {4, 5}, {14, 17}, {5, 11}, {15, 16}};
    res = solution.platesBetweenCandles(s, queries);
    log(res);
    return 0;
}
