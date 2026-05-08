#include <iostream>
using namespace std;
// Base class
class Product {
protected:
    string name;
    double price;

public:
    // Constructor of base class
    Product(string n, double p) {
        name = n;
        price = p;
    }

    void displayProduct() 
	{
        cout<<"Product Name: " << name <<endl;
        cout<<"Price: " << price <<endl;
    }
};

// Derived class
class Electronics : public Product {
private:
    int warrantyYears;

public:
    // Constructor chaining
    Electronics(string n, double p, int w) : Product(n, p) {
        warrantyYears = w;
    }

    void displayElectronics() 
	{
        displayProduct();
        cout << "Warranty years: " << warrantyYears << endl;
    }
};

int main() 
{
    Electronics e1("Computer", 80000, 3);
    e1.displayElectronics();
    return 0;
}
