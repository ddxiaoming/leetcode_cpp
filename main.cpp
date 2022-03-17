#include <map>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
map<char, unsigned> count(const string& string) {
    map<char, unsigned> res;
    for (const char c : string) ++res[c];
    return res;
}

int	main(int argc, char **argv) {
    vector<int> v;
    try {
        cout << stoi("asjfioa") << endl;
    } catch (invalid_argument &err) {
        cout << "err" << endl;
    }
    
    return 0;
}
