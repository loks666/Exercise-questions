// 程序输出结果
#include <iostream>

using namespace std;

void func();

void func() {
    int x = 0;
    x++;
    static int y = 0;
    y++;
    cout << "x=" << x << ";y =" << y << endl;
}

int main() {
    for (int i = 0; i < 6; i++) {
        func();
    }
}