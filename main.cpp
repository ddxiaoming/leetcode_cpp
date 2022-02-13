//
// Created by lemon on 2022/2/8.
//
#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;
int main() {
    const int a = 10;
    const int *b = &a;
    string s, word;
    getline(cin, s);
    istringstream iss(s);
    while (iss >> word) {
        for (char &c : word) c = static_cast<char>(toupper(c));
        cout << word << endl;
    }
    return 0;
}