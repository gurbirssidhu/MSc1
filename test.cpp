#include <iostream>
void printSomeStuff();


int main() {
    int array[5] {1, 3, 4, 6, 2};
    printSomeStuff();

    return 0;
}

void printSomeStuff() {
    for (int i{0}; i < 5; ++i) {
        std::cout << array[i] << '\n';
    }
}