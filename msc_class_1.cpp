#include <iostream>

// Defining a classs named MSc
class MSc { 
    char name[30];          // unless specified, all the members of class are private
    int age;
    public:                 // Public members of class can be accessed by anyone
        void getData();     // declaring the member functions of class
        void dispData();
};

// defining member functions of class
void MSc::getData() {   
    std::cout << "Enter name -->    ";
    std::cin >> name;
    std::cout << "Enter your age--> ";
    std::cin >> age;
}

void MSc::dispData() {
    std::cout << "Name of student:  " << name <<'\n';
    std::cout << "Age:              " << age <<'\n';
}

// main function starts here
int main() {
    MSc student1;   // defininf an object "student1" of class "MSc"
    MSc student2;   // similarly object "student2" is defined

    // getting data for both students
    std::cout << "Student 1\n";
    student1.getData();
    std::cout << "Student 2\n";
    student2.getData();

    // Displaying data of student 1 and 2
    std::cout << "\n-----------------\n";
    std::cout << "Student 1\n";
    student1.dispData();
    std::cout << "Student 2\n";
    student2.dispData();

    return 0;
}