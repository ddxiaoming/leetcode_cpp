#include <iostream>
#include <unordered_set>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        int left = 0, right = static_cast<int>(s.size()) - 1;
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while (left < right) {
            if (vowels.find(s[left]) == vowels.end()) ++left;
            else if (vowels.find(s[right]) == vowels.end()) --right;
            else swap(s[left++], s[right--]);
        }
        return s;
    }
};

int main(int argc, char **argv) {

}