#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string empName;

    // Static variable
    static string companyName;

public:
    // Constructor
    Employee(int id, string name) {
        empID = id;
        empName = name;
    }

    void display() {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
    }

    static void displayCompany() {
        cout << "Company Name: " 
             << companyName << endl;
    }
};

string Employee::companyName = "Tech Solutions";

int main() 
{
    Employee e1(101, "Ali");
    Employee e2(102, "Sara");
    
    e1.display();
    cout << endl;
    e2.display();

    cout << endl;
    Employee::displayCompany();

    return 0;
}
