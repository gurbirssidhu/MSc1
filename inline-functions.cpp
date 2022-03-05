#include <iostream>
using namespace std;

inline double cubeV(double a) {
    return a*a*a;
}

int main() {
    double side;
    cout << "Side of cube:  ";
    cin >> side;

    cout << "Volume of cube is: " << cubeV(side) << " units.\n";

    return 0;
}