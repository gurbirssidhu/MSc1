#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
    int num;
    cout << "Number of observations:    ";
    cin >> num;

    double x_values[num];
    double y_values[num];

    double sum_x{0}, sum_y{0}, sum_xy{0}, sum_xs{0};
    for (int i{0}; i < num; ++i) {
    cout << "Enter value of x" << i + 1 << " : ";
    cin >> x_values[i];
    cout << "Enter value of y" << i + 1 << " :  ";
    cin >> y_values[i];

    sum_x += x_values[i];
    sum_y += y_values[i];
    sum_xy += x_values[i] * y_values[i];
    sum_xs += x_values[i] * x_values[i]; 
    }

    double m{(sum_x*sum_y - num*sum_xy) / (sum_x * sum_x - num * sum_xs)};
    double c{(sum_y - m * sum_x) / num};

    ofstream plot("fitting.dat");

    for (int i{0}; i < num; ++i) {
        plot << x_values[i] << "\t\t" << y_values[i] << "\t\t" << m * x_values[i] + c << '\n'; 
    }

    return 0;
}