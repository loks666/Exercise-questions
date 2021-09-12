#include <iostream>
// 以下程序输出"0,15,0",请将程序补充完整
using namespace std;

class base {
public:
    int f() { return 0; }
};

class derived : public base {
public:
    int a, b, c;

    void set(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    int f() { return a + b + c; }
};

int main() {

    /**
     * 程序输出"0,15,0"
     */
    cout << "程序输出\"0,15,0\"" << ":";
    base b;
    derived d;
    b = d;
    cout << b.f() << ",";
    d.set(3, 5, 7);
    cout << d.f() << ",";
    base &p = d;
    cout << p.f() << ",";
}
