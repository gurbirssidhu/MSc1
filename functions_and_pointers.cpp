#include <iostream>
using namespace std;

void getValues(double *array, int num_values) {
    for (int i{0}; i < num_values; ++i) {
        cout << "Enter value " << i + 1 << " :  ";
        cin >> *(array + i);
    }
}

double calcAverage(double *array, int num_values) {
    double sum{0};
    for (int i{0}; i < num_values; ++i) {
        sum += *(array + i);
    }
    return sum / num_values;
}

int main() {
    int num_values{0};
    cout << "Enter number of values:   ";
    cin >> num_values;

    double values[num_values];
    getValues(values, num_values); // the name 'value' is actually a pointer itself to
                      // first element of array 'value[]'
    double avg{calcAverage(values, num_values)};
    std::cout << "The average value is: " << avg << '\n';
    return 0;
}