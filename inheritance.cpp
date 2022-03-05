#include <iostream>
using namespace std;

class B {
    int a;
    public:
        int b;
        void set_ab();
        int get_a();
        void show_a();
};

class D: public B {// public inheritance
    int c;
    public:
        void mult();
        void display();
};

void B::set_ab() {
    a = 5; 
    b = 10;
}

int B::get_a() {
    return a;
}

void B::show_a() {
    cout << "a:     " << a << '\n';
}

void D::mult() {
    c = b * get_a();
}

void D::display() {
    cout << "a:     " << get_a() << '\n';
    cout << "b:     " << b << '\n';
    cout << "c:     " << c << '\n';
}

int main() {
    D d; // object of class D created
    d.set_ab(); // d accessing the member function of B due to inheritance
    d.mult();
    d.show_a();
    d.display();

    return 0;
}