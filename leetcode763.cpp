//
// Created by lemon on 2022/2/17.
//

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> pos_map;
        vector<int> res;
        int sz = static_cast<int>(s.size());
        for (int i = 0; i < sz; ++i) {
            pos_map[s[i]] = i;
        }
        int start = 0, end = 0;
        for (int i = 0; i < sz; ++i) {
            end = max(end, pos_map[s[i]]);
            if (i == end) {
                res.push_back(end - start + 1);
                start = i + 1;
            }
        }
        return res;
    }
};
int main() {
    return 0;
}