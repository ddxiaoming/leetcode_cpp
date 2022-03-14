#include <map>
#include <string>
using namespace std;
map<char, unsigned> count(const string& string) {
    map<char, unsigned> res;
    for (const char c : string) ++res[c];
    return res;
}