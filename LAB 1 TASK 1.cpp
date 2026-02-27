#include <iostream>
using namespace std;
// Declare structure
struct Student
 {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    // Member function
    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    // Create structure variable
    Student s1;
    s1.firstName = "Samia";
    s1.lastName = "Arshad";
    s1.rollNumber = 15;
    s1.marks = 90.75;

    // Call member function
    s1.displayStudentInfo();
    return 0;
}
