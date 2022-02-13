//
// Created by lemon on 2022/2/8.
//
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <iostream>
using namespace std;
void print_exit_reason(int status) {

    if (WIFEXITED(status)) {
        cout << "正常终止，退出状态为：" << WEXITSTATUS(status) << endl;
    } else if (WIFSIGNALED(status)) {
        cout << "异常终止，终止信号编号为：" << WTERMSIG(status) << endl;
    } else if (WIFSTOPPED(status)) {
        cout << "已暂停，暂停信号编号为：" << WSTOPSIG(status) << endl;
    }
}
int main() {
    int ret = setuid(0);
    if (ret < 0) {
        cout << "error" << endl;
    }
    return 0;
}