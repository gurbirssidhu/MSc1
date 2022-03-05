#include <iostream>
using namespace std;

class Base {
    public:
        void display() {
            cout << "Display base.\n";
        }
        virtual void show() {
            cout << "show base. \n";
        }
};

class Derived: public Base {
    public:
        void display() {
            cout << "Display derived.\n";
        }
        void show() {
            cout << "show derived.\n";
        }
};

int main() {
    Base B;
    Derived D;
    Base *bptr;
    cout<<"bptr points to Base object B \n";
    bptr = &B;

    bptr -> display();
    bptr -> show();

    cout << "Now bptr points to derived object D.\n";
    bptr = &D;
    
    bptr -> display();
    bptr -> show();

    return 0;
}