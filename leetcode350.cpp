#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> res;
        int p1 = 0, p2 = 0, nums1_sz = static_cast<int>(nums1.size()), nums2_sz = static_cast<int>(nums2.size());
        while (p1 < nums1_sz && p2 < nums2_sz) {
            if (nums1[p1] < nums2[p2]) {
                ++p1;
            } else if (nums1[p1] > nums2[p2]) {
                ++p2;
            } else {
                res.push_back(nums1[p1]);
                ++p1;
                ++p2;
            }
        }
        return res;
    }
};
// (nums1[p1] == nums2[p2])