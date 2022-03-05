#include <iostream>
using namespace std;

// class dclaration
class DisplayCountClass {
    private:
        static int fncallDispCount;
    public:
        void DisplayCount();
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

    object1.DisplayCount();
    object2.DisplayCount();
    object1.DisplayCount();

    return 0;
}