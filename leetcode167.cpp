#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = static_cast<int>(numbers.size()) - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1};
            } else if (sum < target) {
                ++left;
            } else {
                --right;
            }
        }
        return {};
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
int main() {
    Solution solution;
    vector<int> numbers = {2, 7, 11, 15};
    vector<int> res = solution.twoSum(numbers, 9);
    log(res);

    numbers = {2, 3, 4};
    res = solution.twoSum(numbers, 6);
    log(res);

    numbers = {-1, 0};
    res = solution.twoSum(numbers, -1);
    log(res);
}