#include <iostream>

void printArray(double *array_adrs) {
    for (int i{0}; i < 5; ++i) {
        std::cout << *(array_adrs + i) << '\n';
    }
}

int main() {
    int a{5};
    std::cout << a<< '\t' << &a << '\t' << *(&a) << '\n';
    std::cout << "________________________________________" << '\n';

    double num_array[] {5.0, 4.0, 3.0, 2.0, 8.0};
    printArray(num_array);
/*    for (int count{0}; count < 5; ++count) {
        std::cout << *(&num_array + count) << '\n';
    }
*/  
/*    std::cout << num_array[0] << '\n';
    std::cout << &num_array << '\n';
    std::cout << *(&num_array) << '\n';
*/
    return 0;
}