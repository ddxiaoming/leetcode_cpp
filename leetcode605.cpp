//
// Created by lemon on 2022/2/16.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sz = static_cast<int>(flowerbed.size());
        for (int i = 0; i < sz; ++i) {
            int before = i == 0 ? 0 : flowerbed[i - 1];
            int current = flowerbed[i];
            int after = i == sz - 1 ? 0 : flowerbed[i + 1];
            if (!before && !current && !after) {
                flowerbed[i] = 1;
                --n;
            }
        }
        return n <= 0;
    }
};

int main() {
    return 0;
}