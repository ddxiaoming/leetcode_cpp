#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = static_cast<int>(s.size()) - 1;
        while (left < right) swap(s[left++], s[right--]);
    }
};
void log(vector<char> &numbers) {
    cout << "[";
    for (auto i = 0; i < numbers.size(); ++i) {
        if (i == numbers.size() - 1) cout << numbers[i];
        else cout << numbers[i] << ", ";
    }
    cout << "]" << endl;
}
int main(int argc, const char** argv) {
    Solution solution;
    vector<char> s{'h','e','l','l','o'};
    solution.reverseString(s);
    log(s);

    s = {'H', 'a', 'n', 'n', 'a', 'H'};
    solution.reverseString(s);
    log(s);
    return 0;
}