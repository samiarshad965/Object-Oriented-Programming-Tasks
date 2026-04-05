#include <iostream>
using namespace std;
// Base class
class Vehicle {
protected:
    string brand;

public:
	//constructor
    Vehicle(string b) {
        brand = b;
        cout << "Vehicle Constructor Called" << endl;
        cout << "Brand: " << brand << endl;
    }
};

// Derived class 1
class Car : public Vehicle {
protected:
    int seats;

public:
	//constructor
    Car(string b, int s) : Vehicle(b) {
        seats = s;
        cout << "Car Constructor Called" << endl;
        cout << "Seats: " << seats << endl;
    }
};

// Derived class 2
class ElectricCar : public Car {
private:
    int charging;

public:
	//constructor
    ElectricCar(string b, int s, int c) : Car(b, s) {
        charging = c;
        cout << "ElectricCar Constructor Called" << endl;
        cout << "Charging hours: " << charging << " hours"<< endl;
    }
};

int main() {
    ElectricCar e1("Audi", 5, 8);
    return 0;
}
