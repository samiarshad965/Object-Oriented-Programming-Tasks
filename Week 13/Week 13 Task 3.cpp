#include <iostream>
using namespace std;
template <typename T>
T largest(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int i1, i2;
    float f1, f2;
    double d1, d2;
    cout << "Enter two integers: "<<endl;
    cin >> i1 >> i2;
    cout << "Largest integer = " << largest(i1, i2) << endl;
    cout << "Enter two float numbers: "<<endl;
    cin >> f1 >> f2;
    cout << "Largest float = " << largest(f1, f2) << endl;
    cout << "Enter two double numbers: "<<endl;
    cin >> d1 >> d2;
    cout << "Largest double = " << largest(d1, d2) << endl;
    return 0;
}
