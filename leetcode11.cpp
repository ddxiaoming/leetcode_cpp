#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = static_cast<int>(height.size()) - 1, res = 0;
        while (left < right) {
            res = max(res, (right - left) * min(height[left], height[right]));
            if (height[left] < height[right]) ++left;
            else --right;
        }
        return res;
    }
};
int main() {

}
