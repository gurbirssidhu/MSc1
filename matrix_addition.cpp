#include <iostream>
using namespace std;

int main() {    
    int n{};
    cout << "Enter order of matrix:    ";
    cin >> n;

    double matrix1[n][n]{};
    double matrix2[n][n]{};

    // Matrix input
    cout << "Enter the elements of matrix 1.\n";
    for (int i{0}; i < n; ++i){
        for (int j{0}; j < n; ++j){
            cout << "a" << i + 1 << j + 1 << " :   ";
            cin >> matrix1[i][j];
        }         
    }

    cout << "Enter the elements of matrix 2.\n";
    for (int i{0}; i < n; ++i){
        for (int j{0}; j < n; ++j){
            cout << "b" << i + 1 << j + 1 << " :   ";
            cin >> matrix2[i][j];
        }         
    }

    // Addition
    double add[n][n]{}; 

    cout << "Addition of matrix 1 and matrix 2 is: \n";
    for (int i{0}; i < n; ++i) {
        for (int j{0}; j < n; ++j) {
            add[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << add[i][j] << "\t";
        }
        cout << '\n';
    }    

    return 0;
}