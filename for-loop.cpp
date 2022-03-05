#include <iostream>
using namespace std;

int main() {
    // Calculate factorial of a number
    cout << "Enter a number:   ";
    int num;
    cin >> num;

    long int mult{1};
    for (int i{1}; i <= num; ++i) {
        mult *= i;
    } 

    cout << "factorial of " << num << " is: " << mult << '\n';

    return 0;
}