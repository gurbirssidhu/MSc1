#include <iostream>
using namespace std;

int main() {
    cout << "In this program we will calulate mean of some data points using a function.\n";
    int num_values{0};
    cout << "Enter number of values:   ";
    cin >> num_values;
    double sum{0};
    double value{0};
    for (int count{0}; count < num_values; count++) {
        cout << "Enter value " << count + 1 << " :  ";
        cin >> value;
        sum += value;
    }
    
    std::cout << "The mean value is:    " << sum/num_values << '\n';

    return 0;
}