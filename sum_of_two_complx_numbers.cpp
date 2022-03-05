#include <iostream>
using namespace std;

class ComplexNumbers {
    private:
        double real_part;
        double img_part;

    public:
        void acceptAttribute();
        void displayAttribute();
        void getSum(ComplexNumbers c1, ComplexNumbers c2); 
};

// defining the member functinos
void ComplexNumbers::acceptAttribute() {
    cout << "Enter real part of complex number: ";
    cin >> real_part;
    
    cout << "Enter imaginary part of complex number:    ";
    cin >> img_part;
}

void ComplexNumbers::displayAttribute() {
    cout << real_part << " + i" << img_part << '\n';
}

void ComplexNumbers::getSum(ComplexNumbers c1, ComplexNumbers c2) {
    real_part = c1.real_part + c2.real_part;
    img_part = c1.img_part + c2.img_part; 
}

int main() {
    ComplexNumbers num1;
    ComplexNumbers num2;
    ComplexNumbers sum;

    // taking input for real and imaginary parts
    num1.acceptAttribute();
    num2.acceptAttribute();

    // Displaying the complex numbers
    cout << "C1:    " << '\n';
    num1.displayAttribute();
    cout << "C2:    " << '\n';
    num2.displayAttribute();

    // Adding the two complex numbers
    sum.getSum(num1, num2);

    // Display the sum
    cout << "Sum of C1 and C2:  " << '\n';
    sum.displayAttribute();

    return 0;
}