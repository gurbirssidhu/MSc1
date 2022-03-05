// Multiplication
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
    double mult[n][n]{};

    cout << "Multiplication of matrix 1 and matrix 2 is: \n";

    for (int i{0}; i < n; ++i) {
        for (int j{0}; j < n; ++j) {
            int sum{0};
            for (int k{0}; k < n; ++k) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            mult[i][j] = sum;
            cout << mult[i][j] << '\t';
        }
        cout << '\n';
 	}
 	
 	return 0;
}
