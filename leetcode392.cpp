#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief 双指针版本
 * 
 */
class Solution1 {
public:
    bool isSubsequence(string s, string t) {
        int s_len = static_cast<int>(s.size()), t_len = static_cast<int>(t.size());
        int s_idx = 0, t_idx = 0;
        while (s_idx < s_len && t_idx < t_len) {
            if (s[s_idx] == t[t_idx]) {
                ++s_idx;
                ++t_idx;
            } else {
                ++t_idx;
            }
        }
        return s_idx == s_len;
    }
};

/**
 * @brief 
 * 进阶：
 * 如果有大量输入的 S，称作 S1, S2, ... , Sk 
 * 其中 k >= 10亿，你需要依次检查它们是否为 T 的子序列。
 * 在这种情况下，你会怎样改变代码？
 */
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int t_sz = static_cast<int>(t.size()), s_sz = static_cast<int>(s.size());
        // dp[i][j] 代表从字符 i 之后，字符 j 第一次出现的位置
        // dp[i][j] =  = t_sz 表示字符 i 之后，不存在字符 j
        vector<vector<int>> dp(t_sz, vector<int>(26, t_sz));
        dp[t_sz - 1][t[t_sz - 1] - 'a'] = t_sz - 1;
        for (int i = t_sz - 2; i >= 0; --i) {
            dp[i] = dp[i + 1];
            dp[i][t[i] - 'a'] = i;
        }
        int search_idx = 0;
        for (int i = 0; i < s_sz; ++i) {
            if (dp[search_idx][s[i] - 'a'] == t_sz) return false;
            search_idx = dp[search_idx][s[i] - 'a'] + 1;
        }
        return true;
    }
};
int	main(int argc, char **argv) {
    Solution solution;
    string s = "abc", t = "ahbgdc";
    cout << boolalpha << solution.isSubsequence(s, t) << endl;

    s = "axc", t = "ahbgdc";
    cout << boolalpha << solution.isSubsequence(s, t) << endl;
    return 0;
}
