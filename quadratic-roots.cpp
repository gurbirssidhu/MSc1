#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "The eqn is ax^2 + bx +c = 0\nEnter the value of a, b and c.\n";
    cout << "a:     ";
    cin >> a;
    cout << "b:     ";
    cin >> b;
    cout << "c:     ";
    cin >> c; 

    double root1; 
    double root2;
    double dscrm{b*b - 4*a*c};

    if (dscrm >= 0) {
        root1 = (-b + dscrm) / (2*a);
        root2 = (-b - dscrm) / (2*a);
        cout << "Roots are :    " << root1 << " and " << root2 << '\n';
    } 
    else {
        double img = sqrt(-dscrm);
        cout << "The roots are complex.\n";
        cout << "First root:    " << (-b/(2*a)) << " + i*" << img/(2*a) << '\n';   
        cout << "Second root:   " << (-b/(2*a)) << " - i*" << img/(2*a) << '\n';   
    }

    return 0;
}