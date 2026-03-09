#include <iostream>
using namespace std;
struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "\nFull Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
 {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    // Array of structures
    Student students[n];

    // Input details
    for(int i = 0; i < n; i++)
	 {
        cout << "\nEnter details for Student " << i + 1 << endl;
        cout << "First Name: ";
        cin >> students[i].firstName;
        
        cout << "Last Name: ";
        cin >> students[i].lastName;

        cout << "Roll Number: ";
        cin >> students[i].rollNumber;

        cout << "Marks: ";
        cin >> students[i].marks;
    }

    // Display details
    for(int i = 0; i < n; i++) 
	{
        students[i].displayStudentInfo();
    }

    return 0;
}
