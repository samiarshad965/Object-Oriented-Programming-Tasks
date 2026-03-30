#include <iostream>
using namespace std;
// Base class
class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) 
	{
        name = n;
        age = a;
    }

    void display_person() 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class 1
class Employee : public Person {
private:
    string employee_id;

public:
    // Constructor
    Employee(string n, int a, string id) : Person(n, a) {
        employee_id = id;
    }

    void display_employee() {
        cout << "Employee ID: " << employee_id << endl;
    }
};

// Derived class 2
class Manager : public Employee {
private:
    string department;

public:
    // Constructor
    Manager(string n, int a, string id, string dep)
        : Employee(n, a, id) {
        department = dep;
    }

    void display_manager() {
        cout << "Department: " << department << endl;
    }
};

int main() 
{
    string name, emp_id, dep;
    int age;

    // Input
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter Employee ID: ";
    cin >> emp_id;

    cout << "Enter Department: ";
    cin >> dep;

    // Object
    Manager m1(name, age, emp_id, dep);
    cout <<"Manager Information:"<< endl;
    m1.display_person(
