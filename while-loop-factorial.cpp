#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number:   ";
    int num;
    cin >> num;

    int i{1};
    long int fact{1};
    while (i <= num) {
        fact *= i;
        ++i;
    } 

    cout << "factorial is : " << fact << '\n';
    return 0;
}