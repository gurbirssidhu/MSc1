#include <iostream>
using namespace std;

class xyz;
class abc {
    int num1;
    public:
        void setValue(int value) {
            num1 = value;
        }

        friend void max(abc, xyz);
};

class xyz {
    int num1;
    public:
        void setValue(int value) {
            num1 = value;
        }

        friend void max(abc, xyz);
};

void max(abc a, xyz x) {
    if (a.num1 >= x.num1) {
        cout << a.num1 << '\n';
    }
    else {
        cout << x.num1 << '\n';
    }
}
int main() {
    abc obj1;
    xyz obj2;

    obj1.setValue(45);
    obj2.setValue(63);

    max(obj1, obj2);
    
    return 0;
}