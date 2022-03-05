#include <iostream>
#include <string>
using namespace std;

class Book {
    string name;
    string author;
    int num_pages;
    string ISBN;
    int price;
    
    public:
        void getData();
        void setData(string book_name, string auth, int n_p, string isbn, int cost);
};

void Book :: getData() {
    cout << "Name:          " << name << '\n';
    cout << "Author:        " << author << '\n';
    cout << "ISBN:          " << ISBN << '\n';
    cout << "Num. pages:    " << num_pages << '\n';
    cout << "Price:         " << "Rs. " << price << '\n';
}

void Book :: setData(string book_name, string auth, int n_p, string isbn, int cost) {
    name = book_name;
    author = auth;
    num_pages = n_p;
    ISBN = isbn;
    price = cost;
}


int main() {
    cout << "Books available:\n" <<
        "1. Introduction to Electrodynamics\n" <<
        "2. Introduction to Quantum Mechanics\n" << 
        "3. Quantum Mechanics: Concepts and Applications\n" <<
        "4. Optics\n" <<
        "5. Classical Mechanics\n";
    
    Book book1, book2, book3, book4, book5;
    book1.setData("Introduction to Electrodynamics", 
                    "D.J.Griffiths", 
                     620, 
                    "978-1108822909", 
                    639);
    book2.setData("Introduction to Quantum Mechanics", 
                    "D.J.Griffiths", 
                    508, 
                    "978-1107189638", 
                    1997);
    book3.setData("Quantum Mechanics: Concepts and Applications", 
                    "Nouredine Zettili",
                    688,
                    "9788126561056",
                    1100);
    book4.setData("Optics",
                    "Eugene Hecht",
                    650,
                    "978-9332581265",
                    550);
    book5.setData("Classical Mechanics",
                    "Herbert Goldstein",
                    664,
                    "978-8131758915",
                    819);

    cout << "\nEnter the serial number for which you want detail: ";
    int num;
    cin >> num;
    if (num != 1 & num != 2 & num != 3 & num != 4 & num != 5) {
        cout << "Wrong input.\n";
        return 0;
    }

    switch (num) {
        case 1:
            book1.getData();
            break;
        case 2:
            book2.getData();
            break;
        case 3:
            book3.getData();
            break;
        case 4:
            book4.getData();
            break;
        case 5:
            book5.getData();
            break;
    }

    return 0;
}