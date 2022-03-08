#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int pA = m - 1, pB = n - 1, pos = m + n - 1;
        while (pB >= 0) {
            if (pA < 0) A[pos--] = B[pB];
            else if (A[pA] > B[pB]) A[pos--] = A[pA--];
            else A[pos--] = B[pB--];
        }
    }
};
int main(int argc, const char** argv) {
    return 0;
}