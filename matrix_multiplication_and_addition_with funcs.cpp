#include <iostream>

double inputMatrix(int order) {
    int matrix[order][order];
    for (int i{0}; i < order; ++i){
        for (int j{0}; j < order; ++j){
            std::cout << "element-" << i + 1 << j + 1 << " :   ";
            std::cin >> matrix1[i][j];
        }         
    }    
    return matrix;
}

int main() {    
    int n{};
    std::cout << "Enter order of matrix:    ";
    std::cin >> n;

    double matrix1{inputMatrix(n)};
    double matrix2[n][n]{};
/*
    // Matrix input
    std::cout << "Enter the elements of matrix 1.\n";
    for (int i{0}; i < n; ++i){
        for (int j{0}; j < n; ++j){
            std::cout << "element-" << i + 1 << j + 1 << " :   ";
            std::cin >> matrix1[i][j];
        }         
    }
*/
    std::cout << "Enter the elements of matrix 2.\n";
    for (int i{0}; i < n; ++i){
        for (int j{0}; j < n; ++j){
            std::cout << "b" << i + 1 << j + 1 << " :   ";
            std::cin >> matrix2[i][j];
        }         
    }

    std::cout << matrix1[1][0] << '\n';
    std::cout << matrix2[1][0] << '\n';

    // Addition
    double add[n][n]{}; 

    std::cout << "Addition of matrix 1 and matrix 2 is: \n";
    for (int i{0}; i < n; ++i) {
        for (int j{0}; j < n; ++j) {
            add[i][j] = matrix1[i][j] + matrix2[i][j];
            std::cout << add[i][j] << "\t";
        }
        std::cout << '\n';
    }

    // Multiplication
    double mult[n][n]{};

    std::cout << "Multiplication of matrix 1 and matrix 2 is: \n";

    for (int i{0}; i < n; ++i) {
        for (int j{0}; j < n; ++j) {
            int sum{0};
            for (int k{0}; k < n; ++k) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            mult[i][j] = sum;
            std::cout << mult[i][j] << '\t';
        }
        std::cout << '\n';
    }

    return 0;
}