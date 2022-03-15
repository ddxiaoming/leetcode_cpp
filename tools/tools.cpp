#include "tools.hpp"
#include <iostream>
void log(std::vector<int> &numbers) {
    std::cout << "[";
    for (auto i = 0; i < numbers.size(); ++i) {
        if (i == numbers.size() - 1) std::cout << numbers[i];
        else std::cout << numbers[i] << ", ";
    }
    std::cout << "]" << std::endl;
}