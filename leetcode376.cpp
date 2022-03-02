#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() == 1) return 1;
        int res = (nums[0] != nums[1]) + 1, pre_dif = nums[1] - nums[0];
        for (auto i = 2; i < nums.size(); ++i) {
            int cur_diff = nums[i] - nums[i -1];
            if ((pre_dif >= 0 && cur_diff < 0) || (pre_dif <= 0 && cur_diff > 0)) {
                pre_dif = cur_diff;
                ++res;
            }
        }
        return res;
    }
};
int main() {
    Solution solution;
    vector<int> nums{51,226,208,165,202,286,190,212,219,271,36,245,20,238,238,89,
                      105,66,73,9,254,206,221,237,203,33,249,253,150,102,57,249,203,
                      10,123,178,85,203,35,276,129,116,37,163,99,142,187,249,134,77,
                      217,298,29,127,174,115,122,178,12,80,122,76,16,41,115,84,104,
                      121,127,40,287,129,9,172,112,51,40,135,205,53,259,196,248,5,123,
                      184,209,130,271,42,18,143,24,101,10,273,252,50,173,80,119,129,45,
                      257,299,78,278,78,190,215,284,129,200,232,103,97,167,120,49,298,
                      141,146,154,233,214,196,244,50,110,48,152,82,226,26,254,276,292,
                      286,215,56,128,122,82,241,222,12,272,192,224,136,116,70,39,207,
                      295,49,194,90,210,123,271,18,276,87,177,240,276,33,155,200,51,6,
                      212,36,149,202,48,114,58,91,83,221,175,148,278,300,284,86,191,95,
                      77,215,113,257,153,135,217,76,85,269,126,194,199,195,20,204,194,
                      50,220,228,90,221,256,87,157,246,74,156,9,196,16,259,234,79,31,
                      206,148,12,223,151,96,229,165,9,144,26,255,201,33,89,145,155,1,
                      204,37,107,80,212,88,186,254,9,158,180,24,45,158,100,52,131,71,
                      174,229,236,296,299,184,168,41,45,76,68,122,85,292,238,293,179,
                      143,128,47,87,267,53,187,76,292,0,160,70,172,292,9,64,156,153,
                      26,145,196,222};
    cout << solution.wiggleMaxLength(nums) << endl; // 202

    nums = {0, 0, 0};
    cout << solution.wiggleMaxLength(nums) << endl; // 1

    nums = {372,492,288,399,81,2,320,94,416,469,427,117,265,357,399,456,496,337,355,219,475,295,457,350,490,470,281,127,131,36,430,412,442,174,128,253,1,56,306,295,340,73,253,130,259,223,14,79,409,384,209,151,317,441,156,275,140,224,128,250,290,191,161,472,477,125,470,230,321,5,311,23,27,248,138,284,215,356,320,194,434,136,221,273,450,440,28,179,36,386,482,203,24,8,391,21,500,484,135,348,292,396,145,443,406,61,212,480,455,78,309,318,84,474,209,225,177,356,227,263,181,476,478,151,494,395,23,114,395,429,450,247,245,150,354,230,100,172,454,155,189,33,290,187,443,123,59,358,241,141,39,196,491,381,157,157,134,431,295,20,123,118,207,199,317,188,267,335,315,308,115,321,56,52,253,492,97,374,398,272,74,206,109,172,471,55,452,452,329,367,372,252,99,62,122,287,320,325,307,481,316,378,87,97,457,21,312,249,354,286,196,43,170,500,265,253,19,480,438,113,473,247,257,33,395,456,246,310,469,408,112,385,53,449,117,122,210,286,149,20,364,372,71,26,155,292,16,72,384,160,79,241,346,230,15,427,96,95,59,151,325,490,223,131,81,294,18,70,171,339,14,40,463,421,355,123,408,357,202,235,390,344,198,98,361,434,174,216,197,274,231,85,494,57,136,258,134,441,477,456,318,155,138,461,65,426,162,90,342,284,374,204,464,9,280,391,491,231,298,284,82,417,355,356,207,367,262,244,283,489,477,143,495,472,372,447,322,399,239,450,168,202,89,333,276,199,416,490,494,488,137,327,113,189,430,320,197,120,71,262,31,295,218,74,238,169,489,308,300,260,397,308,328,267,419,84,357,486,289,312,230,64,468,227,268,28,243,267,254,153,407,399,346,385,77,297,273,484,366,482,491,368,221,423,107,272,98,309,426,181,320,77,185,382,478,398,476,22,328,450,299,211,285,62,344,484,395,466,291,487,301,407,28,295,36,429,99,462,240,124,261,387,30,362,161,156,184,188,99,377,392,442,300,98,285,312,312,365,415,367,105,81,378,413,43,326,490,320,266,390,53,327,75,332,454,29,370,392,360,1,335,355,344,120,417,455,93,60,256,451,188,161,388,338,238,26,275,340,109,185};
    cout << solution.wiggleMaxLength(nums) << endl; // 334
    return 0;
}