#include <iostream>
using namespace std;
class Shape 
{
public:
    virtual double area() {
        return 0;
    }
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    
    // Override
    double area() override {
        return length * width;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    
    // Override
    double area() override {
        return 3.14 * radius * radius;
    }
};

int main() 
{
    Shape* s1 = new Rectangle(8, 9);
    Shape* s2 = new Circle(2);
    
    cout << "Rectangle area: " << s1->area() << endl;
    cout << "Circle area: " << s2->area() << endl;    
    
    delete s1;
    delete s2;
    return 0;
}
