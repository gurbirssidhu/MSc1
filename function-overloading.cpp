#include <iostream>
using namespace std;

const double pi = 3.14159;

double volume(double length, double breadth, double height); // volume of cuboid
double volume( double radius); // volume of sphere

int main() {
    double l, b, h;
    cout << "Enter length breadth and side of cuboid:   ";
    cin >> l >> b >> h;

    double rad;
    cout << "Enter radius of sphere:    ";
    cin >> rad;

    cout << "Volume of cuboid:  " << volume(l, b, h) << " units. \n";
    cout << "Volume of sphere:  " << volume(rad) << " units.\n";
    return 0;
}

double volume(double length, double breadth, double height) {
    return length * breadth * height;
}

double volume(double radius) {
    return (4 / 3)* pi * radius * radius * radius;
}