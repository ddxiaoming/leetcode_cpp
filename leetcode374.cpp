//
// Created by lemon on 22-4-29.
//
int guess(int num);
class Solution {
public:
    int guessNumber(int n) {
        unsigned int left = 1, right = n;
        while (left <= right) {
            unsigned int mid = (left + right) / 2;
            int res = guess(mid);
            if (res == 0) return mid;
            else if (res == -1) right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }
};
int main(int argc, char **argv) {
    return 0;
}