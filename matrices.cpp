#include <iostream>
using namespace std;

int main(){
    cout << "Enter order of square matrices:   ";
    int order{};
    cin >> order;

    // defining the matrices
    double matrix1[order][order]{};
    double matrix2[order][order]{};
    
    cout << '\n';

    // Taking Input for matrix1
    cout << "Enter elements for matrix 1:  \n";
    for (int i{0}; i < order; ++i) {
        for (int j{0}; j < order; ++j) {
            //  Row i column j
            cout << "Enter the element (" << i + 1 << j + 1 << "):  ";
            cin >> matrix1[i][j];
        }
    }
    cout << '\n';

    // Output for matrix
    cout << "The matrix formed is:  " << '\n';
    for (int i{0}; i < order; ++i) {
        for (int j{0}; j < order; ++j) {
            cout << matrix1[i][j] << '\t';
        }
        cout << '\n';
    }

    return 0; 
}