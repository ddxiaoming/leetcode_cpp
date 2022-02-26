#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1, p2 = n - 1, p = m + n - 1;
        while (p2 >= 0) {
            if (p1 < 0) {
                nums1[p--] = nums2[p2--];
            } else if (nums1[p1] > nums2[p2]) {
                nums1[p--] = nums1[p1--];
            } else {
                nums1[p--] = nums2[p2--];
            }
        }
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
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}, nums2 = {2, 5, 6};
    int m = 3, n = 3;
    solution.merge(nums1, m, nums2, n);
    log(nums1);

    nums1 = {1}, nums2 = {};
    m = 1, n = 0;
    solution.merge(nums1, m, nums2, n);
    log(nums1);

    nums1 = {0}, nums2 = {1};
    m = 0, n = 1;
    solution.merge(nums1, m, nums2, n);
    log(nums1);
}