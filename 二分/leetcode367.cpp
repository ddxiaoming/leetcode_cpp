class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 0, right = num;
        while (left <= right) {
            int mid = (left + right) / 2;
            long long temp_num = (long long) mid * mid;
            if (temp_num == num) return true;
            else if (temp_num < num) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
};

int main(int argc, char **argv) {
    return 0;
}