#include <iostream>
using namespace std;
class Calculator
 {
public:
    double add(double a, double b) {
        return a + b;
    }

    double multiply(double a, double b) {
        return a * b;
    }
};

//Aggregation
class Student {
    Calculator* cal;  // Reference

public:
    Student(Calculator* c) {
        cal = c;
    }

    void doAddition(double a, double b) {
        cout << "Addition: " << cal->add(a, b) << endl;
    }

    void doMultiplication(double a, double b) {
        cout << "Multiplication: " << cal->multiply(a, b) << endl;
    }
};

int main()
{
    Calculator sharedCal; 

    Student s1(&sharedCal);
    Student s2(&sharedCal);

    s1.doAddition(3, 3);
    s2.doMultiplication(20, 5);
    return 0;
}
