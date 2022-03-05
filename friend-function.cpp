#include <iostream>
using namespace std;

class Sample {
    int num1;
    int num2;

    public:
        void setValue() {
            num1 = 5;
            num2 = 4;
        }
        friend float mean(Sample s); // friend function declaration
};

float mean(Sample s) {
    return (s.num1 + s.num2)/2.0;
}

int main() {
    Sample set1;
    set1.setValue();

    cout << "Mean value:    " << mean(set1) << '\n';

    return 0;
}