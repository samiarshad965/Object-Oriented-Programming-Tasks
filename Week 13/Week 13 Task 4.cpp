#include <iostream>
using namespace std;
template <typename T>
class Calculator {
private:
    T a;  
    T b;  
    
public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }
    
    T add() {
        return a + b;
    }
    
    T subtract() {
        return a - b;
    }
    
    T multiply() {
        return a * b;
    }
};

int main() 
{
    cout << "--- Integer ---" << endl;
    Calculator<int> cal1(10, 5);
    cout << "Add: " << cal1.add() << endl;
    cout << "Subtract: " << cal1.subtract() << endl;
    cout << "Multiply: " << cal1.multiply() << endl;
    
    cout << endl;
    
    cout << "--Double ---" << endl;
    Calculator<double> cal2(12.5, 4.2);
    cout << "Add: " << cal2.add() << endl;
    cout << "Subtract: " << cal2.subtract() << endl;
    cout << "Multiply: " << cal2.multiply() << endl;
    
    return 0;
}
