#include <iostream>
using namespace std;
// Base class
class Employee 
{
private:
    string name;
    double salary;

public:
    // Constructor
    Employee(string n, double s) 
	{
        name = n;
        salary = s;
    }

    void display_employee() 
	{
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class 1
class Developer : public Employee {
private:
    string programming_language;

public:
    // Constructor
    Developer(string n, double s, string lang)
        : Employee(n, s) {
        programming_language = lang;
    }

    void display_developer() {
        cout << "Programming Language: " << programming_language << endl;
    }
};

// Derived class 2
class Designer : public Employee {
private:
    string design_tool;

public:
    // Constructor
    Designer(string n, double s, string tool)
        : Employee(n, s) {
        design_tool = tool;
    }

    void display_designer() {
        cout << "Design Tool: " << design_tool << endl;
    }
};

int main() 
{
    string name, lang, tool;
    double salary;

    // Developer
    cout << "Enter Developer Name: ";
    cin >> name;

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "Enter Programming Language: ";
    cin >> lang;

    Developer d1(name, salary, lang);

    // Designer
    cout << "Enter Designer Name: "<<endl;
    cin >> name;

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "Enter Design Tool: ";
    cin >> tool;

    Designer ds(name, salary, tool);

    // Output
    cout << "\n--- Developer Information ---" << endl;
    d1.display_employee();
    d1.display_developer();

    cout << "\n--- Designer Information ---" << endl;
    ds.display_employee();
    ds.display_designer();
    return 0;
}
