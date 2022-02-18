//
// Created by lemon on 2022/2/8.
//
#include <string>
#include <vector>
template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
    std::vector<T> res;
    for (auto i = 0; i < iterable.size(); ++i) {
        if (i == 0 || iterable[i] != iterable[i - 1]) res.push_back(iterable[i]);
    }
    return res;
}
std::vector<char> uniqueInOrder(const std::string& iterable){
    std::vector<char> res;
    for (auto i = 0; i < iterable.size(); ++i) {
        if (i == 0 || iterable[i] != iterable[i - 1]) res.push_back(iterable[i]);
    }
    return res;
}

int main() {
    return 0;
}