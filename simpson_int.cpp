#include <iostream>
#include <cmath>
using namespace std;

// define function here
double integrand(double x) {
    return pow(x,0.5);
}

int main() {
    double l_limit;
    double u_limit;

    cout << "The function is x^(1/2)\n";
    cout << "Enter lower limit: " << '\n';
    cin >> l_limit;
    cout << "Enter Upper limit: " << '\n';
    cin >> u_limit;

    double step_size{0.0001};
    double num_steps{ (u_limit - l_limit) / step_size};
    int num_step = num_steps;

    double sum = 0;
    double x_values[num_step];
    for (int i{0}; i < num_step; ++i) {
        x_values[i] = l_limit + i * step_size;
    }

    for (int i{0}; i < num_step - 2; i = i + 2) {
        sum += (integrand(x_values[i]) + 4 * integrand(x_values[i+1]) + integrand(x_values[i+2])) * step_size / 3;
    }

    cout << "The value of integral is:  "<< sum << '\n';
    return 0;
}