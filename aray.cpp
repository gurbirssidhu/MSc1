#include <iostream>
using namespace std;


class c1 {
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        void setData(int n1, int n2, int n3) {
            a = n1;
            b = n2;
            c = n3;
        }
        void dispData() {
            cout << a << " " << b << " " << c << '\n';
        }
        friend void frFn(c1 c);
};

void frFn(c1 c) {
    cout << c.a << " " << c.b << " " << c.c << '\n';
}

int main() {
    c1 obj1;
    obj1.setData(5, 6, 7);
    obj1.dispData();

    frFn(obj1);
    return 0;
}

// 1d arrays fundamental
// 2d [[], [], [], [], ......., []]