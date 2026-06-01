#include <iostream>
using namespace std;

template <typename T>
T findMin(T a, T b) 
{
    if(a < b)
        return a;
    else
        return b;
}

int main() 
{
    // integers
    int x1 = 12, y1 = 5;
    cout << "Min of " << x << " and " << y << " = " << findMin(x1, y1) << endl;
    
    // doubles
    double p1 = 3.7, q1 = 1.2;
    cout << "Min of " << p1 << " and " << q1 << " = " << findMin(p1, q1) << endl;
    
    // characters
    char c1 = 'Z', c2 = 'A';
    cout << "Min of " << c1 << " and " << c2 << " = " << findMin(c1, c2) << endl;
    
    return 0;
}
