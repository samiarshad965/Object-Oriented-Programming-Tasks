#include <iostream>
using namespace std;
// Parent class
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

    void display_person_info() 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Child class
class Student : public Person {
private:
    string student_id;

public:
    // Constructor
    Student(string n, int a, string id) : Person(n, a) {
        student_id = id;
    }

    void display_student_info() {
        cout << "Student ID: " << student_id << endl;
    }
};

int main() 
{
    string name, student_id;
    int age;
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter Student ID: ";
    cin >> student_id;

    // Object
    Student s1(name, age, student_id);
    cout <<"Student Information: "<< endl;
    s1.display_person_info();
    s1.display_student_info();
    return 0;
}
