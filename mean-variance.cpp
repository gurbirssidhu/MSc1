#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<double> getData(int n) {
    vector<double> data;
    double dummy {0};
    for (int i{0}; i < n; ++i) {
        cout << "Enter element number " << i+1 << " :   ";
        cin >> dummy;
        data.push_back(dummy);
    }
    return data;
}

double calcMean(vector<double> data, int n) {
    double sum = 0;
    for (auto & elem:data){
        sum += elem;
    }
    return sum / n;
}

double calcVariance(vector<double> data, double mean, int n) {
    double sum = 0;
    for (auto & elem:data) {
        sum += pow(elem - mean, 2);
    }
    return sum / n;
}

int main() {
    int num;
    cout << "Enter number of data points:   ";
    cin >> num;

    vector<double> data_points {getData(num)};
    
    double mean {calcMean(data_points, num)};
    double variance(calcVariance(data_points, mean, num));
    double st_dev{pow(variance, 0.5)};

    cout << "---------------------------------------" << '\n';
    cout << "Mean is:               " << mean << '\n';
    cout << "Variance is:           " << variance << '\n';
    cout << "Standard Deviation:    " << st_dev << '\n';

    return 0;
}