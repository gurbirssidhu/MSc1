#include <iostream>
using namespace std;

int main() {
    // Check if number is prime
    cout << "Enter a number:    ";
    int num;
    cin >> num;
    if (num == 0 || num == 1) {
        cout << "Not a prime number.\n";
        return 0;
    }
    for (int i{2}; i < num; ++i) {
        if (num % i == 0) {
            cout << "Not a prime number.\n";
            return 0;
        }
        else if (i == num - 1) {
            cout << "You entered a prime number.\n";
        }
    }

    return 0;
}