#include <iostream>
using namespace std;
class Employee 
{
public:
    virtual double calculateSalary() {
        cout << "Base Employee called." << endl;
        return 0;
    }
};

class PermanentEmployee : public Employee {
private:
    double basicSalary;
    double bonus;

public:
    PermanentEmployee(double basic, double b) {
        basicSalary = basic;
        bonus = b;
    }

    // Override
    double calculateSalary() override {
        return basicSalary + bonus;
    }
};

class ContractEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    ContractEmployee(double rate, int hours) {
        hourlyRate = rate;
        hoursWorked = hours;
    }

    // Override
    double calculateSalary() override {
        return hourlyRate * hoursWorked;
    }
};

int main() 
{
    Employee* e1; 
    PermanentEmployee p1(75000, 25000);
    e1 = &p1;
    cout << "Permanent Employee Salary: " << e1->calculateSalary() << endl;

    ContractEmployee c1(400, 50);
    e1 = &c1;
    cout << "Contract Employee Salary: " << e1->calculateSalary() << endl;

    return 0;
}
