#include <iostream>
using namespace std;
class Display 
{
    double lastValue;
public:
    Display() {
        lastValue = 0;
    }

    void show(double value) {
        lastValue = value;
        cout << "Result: " << lastValue << endl;
    }
};

//Composition
class Calculator {
    Display screen;

public:
    void add(double a, double b) {
        double result = a + b;
        screen.show(result);
    }

    void multiply(double a, double b) {
        double result = a * b;
        screen.show(result);
    }
};

int main() 
{
    Calculator cal;
    cal.add(13, 9);
    cal.multiply(15, 2);
    return 0;
}
