//
// Created by lemon on 2022/2/8.
//
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <csignal>
using namespace std;
int main(int argc, char* argv[]) {

    ifstream ifs(argv[1]);
    string line;
    signal(SIGALRM, [](int) -> void {
        alarm(1);
    });
    alarm(1);
    
    while (getline(ifs, line)) {
        cout << line << endl;
        pause();
    }
    ifs.close();
    return 0;
}