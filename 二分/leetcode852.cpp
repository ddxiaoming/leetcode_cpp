#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0, right = static_cast<int>(arr.size()) - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (arr[mid] >= arr[mid + 1] && arr[mid] >= arr[mid - 1]) return mid;
            else if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1]) right = mid - 1; // mid在右半部分
            else left = mid + 1; // mid在左半部分
        }
        return -1;
    }
};
int main(int argc, char **argv) {
    Solution solution;
    vector<int> arr{0, 1, 0};
    cout << solution.peakIndexInMountainArray(arr) << endl;
    arr = {0, 2, 1, 0};
    cout << solution.peakIndexInMountainArray(arr) << endl;
    arr = {0, 10, 5, 2};
    cout << solution.peakIndexInMountainArray(arr) << endl;
    arr = {3, 4, 5, 1};
    cout << solution.peakIndexInMountainArray(arr) << endl;
    arr = {24, 69, 100, 99, 79, 78, 67, 36, 26, 19};
    cout << solution.peakIndexInMountainArray(arr) << endl;
    return 0;
}