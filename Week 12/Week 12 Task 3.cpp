#include <iostream>
using namespace std;

// Abstract class
class HospitalStaff {
protected:
    string staffName;

public:
    // Constructor
    HospitalStaff(string name) {
        staffName = name;
    }

    // Pure virtual function
    virtual void performDuty() = 0;
};

class Doctor : public HospitalStaff {
public:
    Doctor(string name) : HospitalStaff(name) {}

    void performDuty() {
        cout << staffName 
             << " is diagnosing patients" << endl;
    }
};

class Nurse : public HospitalStaff {
public:
    Nurse(string name) : HospitalStaff(name) {}

    void performDuty() {
        cout << staffName 
             << " is assisting patients" << endl;
    }
};

class Receptionist : public HospitalStaff {
public:
    Receptionist(string name) : HospitalStaff(name) {}

    void performDuty() {
        cout << staffName 
             << " is managing appointments" << endl;
    }
};

int main() 
{
    Doctor d1("Doctor");
    Nurse n1("Nurse");
    Receptionist r1("Receptionist");

    d1.performDuty();
    n1.performDuty();
    r1.performDuty();
    return 0;
}
