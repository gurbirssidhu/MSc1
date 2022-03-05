#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Size of int:             " << sizeof(int) << " bytes.\n";
    cout << "Size of long int:        " << sizeof(long int) << " bytes.\n";
    cout << "Size of long long int:   " << sizeof(long long) << " bytes.\n";
    cout << "Size of short:           " << sizeof(short) << " bytes.\n";
    cout << "Size of float:           " << sizeof(float) << " bytes.\n";
    cout << "Size of double:          " << sizeof(double) << " bytes.\n";
    cout << "Size of long double:     " << sizeof(long double) << " bytes.\n";
    cout << "Size of bool:            " << sizeof(bool) << " bytes.\n";
    cout << "Size of char:            " << sizeof(char) << " bytes.\n";

    return 0;
}