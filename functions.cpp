#include <iostream>
using namespace std;

float volume(float a, float b, float c) {
    // Volume of cuboid
    return a * b * c;
}
int main() {
    float length, breadth, height;
    cout << "Enter length:  ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    cout << "Enter height:  ";
    cin >> height;

    std::cout << "Volume of cuboid is:  " << volume(length, breadth, height) << '\n';
    
    return 0;
}