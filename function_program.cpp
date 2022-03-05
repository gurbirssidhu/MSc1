#include <iostream>
using namespace std;

int addition(int n1, int n2) {
    return n1 + n2;
}

int multiplication(int n1, int n2) {
    return n1 * n2;
}

double division(int n1, int n2) {
    double x1 {n1}; // converting int to double to stop rounding off to an integer
    double x2 {n2};
    return x1 / x2;
}

int subtraction(int n1, int n2) {
    return n1 - n2;
}

int main() {
    int num1, num2;
    cout << "Enter number 1:    ";
    cin >> num1;

    cout << "Enter number 2:    ";
    cin >> num2;

    cout << "Addition:          " << addition(num1, num2) << '\n';
    cout << "Subtraction:       " << subtraction(num1, num2) << '\n';
    cout << "Multiplication:    " << multiplication(num1, num2) << '\n';
    cout << "Division:          " << division(num1, num2) << '\n';

    return 0;
}