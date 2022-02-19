//
// Created by lemon on 2022/2/8.
//
#include <string>
#include <vector>
#include <csignal>
#include <iostream>
#include <unistd.h>
#include <algorithm>
long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    std::sort(numbers.begin(), numbers.end());
    return numbers[0] + numbers[1];
}
int main() {
    std::vector<int> numbers{19, 5, 42, 2, 77};
    std::cout << sumTwoSmallestNumbers(numbers) << std::endl;
    return 0;
}