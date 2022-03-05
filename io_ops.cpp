#include <iostream>
using namespace std;

int main() {
    int count = 0;
    char a;
    cout << "Enter characters without any break:    ";
    cin.get(a);

    while (a != '\n') {
        cout.put(a);
        count++;
        cin.get(a);
    }

    cout << "\nNumber of chars entered:   " << count << '\n';

    return 0;
}