#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        int left = 0, right = 0, s_sz = static_cast<int>(s.size());
        int min_left = 0, min_sz = s_sz + 1;
        unordered_map<char, int> needs; // 存储当前窗口中缺少的字符
        unordered_set<char> contains; // 表示每个字符在 t 中是否存在
        int count = 0; // 当前窗口中缺少的字符的总数量
        for (auto &&c : t) {
            ++needs[c];
            contains.insert(c);
            ++count;
        }
        
        while (right < s_sz) {
            if (contains.find(s[right]) != contains.end() && --needs[s[right]] >= 0) {
                --count;
            }
            while (count == 0) { // 在不影响当前结果的前提下，尝试移动左指针来缩小窗口
                if (right - left + 1 < min_sz) {
                    min_left = left;
                    min_sz = right - left + 1;
                }
                if (contains.find(s[left]) != contains.end() && ++needs[s[left]] > 0) {
                    ++count;
                }
                ++left;
            }
            ++right;
        }
        return min_sz > s.size() ? "" : s.substr(min_left, min_sz);
    }
};

int main() {
    Solution solution;
    string s = "ADOBECODEBANC", t = "ABC";
    cout << solution.minWindow(s, t) << endl;

    s = "a"; t = "a";
    cout << solution.minWindow(s, t) << endl;

    s = "a"; t = "aa";
    cout << solution.minWindow(s, t) << endl;
    return 0;
}