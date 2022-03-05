#include <iostream>
using namespace std;

// class dclaration
class DisplayCountClass {
    private:
        static int fncallDispCount;
    public:
        static void DisplayCount();
};

void DisplayCountClass::DisplayCount() {
    fncallDispCount++;
    // display count
    cout << "Number of times:" << fncallDispCount << '\n';
}

// static variable defined outside class
int DisplayCountClass::fncallDispCount;

int main() {
    DisplayCountClass object1;
    DisplayCountClass object2;

    // we are calling the function directly, without any reference to 
    DisplayCountClass::DisplayCount();

    return 0;
}