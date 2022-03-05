#include <iostream>
using namespace std;

// Defining a classs named MSc
class MSc { 
    char f_name[15];
    char l_name[15]; 
    int adm_num;        
    int age;
    float marks;
    // unless specified, all the members of class are private
    public:                 // Public members of class can be accessed by anyone
    // declaring the member functions of class
        void dispData();
        void getData();
};

// defining member functions of class
void MSc::getData() {   
    cout << "Enter first name-->       ";
    cin >> f_name;
    cout << "Enter last name-->        ";
    cin >> l_name;
    cout << "Enter Admission number--> ";
    cin >> adm_num;
    cout << "Enter age-->              ";
    cin >> age;
    cout << "Enter marks(/200)-->      ";
    cin >> marks;
}

void MSc::dispData() {
    cout << "Name of student:  " << f_name << " " << l_name << '\n';
    cout << "Admission number: " << adm_num <<'\n';
    cout << "Age:              " << age <<'\n';
    cout << "Marks:            " << marks <<'\n';
    cout << "Percentage:       " << 100 * marks / 200 <<'\n';
}

// main function starts here
int main() {
    MSc student1;

    // giving values to student1
    student1.getData();

    // displaying all data
    student1.dispData();
    return 0;
}