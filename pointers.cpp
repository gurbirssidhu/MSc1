#include <iostream>
using namespace std;

int main() {
    
    int num{5};
    int *p_num = &num;

    cout << "The variable 'num' is:             " << num << '\n';
    cout << "The pointer defined 'p_num' is:    " << p_num << '\n';
    cout << "The pointer defined directly is:   " << &num << '\n';
    cout << "Printing value of num using p_num: " << *p_num << '\n';

    num = 643287;
    cout << &num << '\n';
    

    int array[3] {1, 2, 3};
    cout << array[3] << '\n';
    cout << array[43] << '\n';
    /*
    cout << array << '\n';
    cout << &array[4] << '\n';

    cout << array + 1 << '\n';
    cout << &(array[1]) << '\n';
    */
    return 0;
}