#include <iostream>
using namespace std;

class M {
    int a;
    int b;
    public:
        void set_vars(int num1, int num2) {
            a = num1;
            b = num2;
        }
        void get_var_M() {
            cout << "a:     " << a << '\n' 
            << "b:      " << b << '\n';
        }
};

class N {
    public:
        int n;
        void set_n() {
            n = 5;
        }
};

class P: public M, public N {
};

int main() {
    P obj; // defining object of class P
    obj.set_vars(7, 2);
    obj.get_var_M();
    obj.set_n();

    cout << "n for obj: " << obj.n << '\n';
    return 0;
}