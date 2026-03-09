#include <iostream>
#include "Calculator.h"
using namespace std;
int main()
{
    Calculator c1;
    int choice;

    cout << "Enter first number: ";
    cin >> c1.num1;

    cout << "Enter second number: ";
    cin >> c1.num2;

    cout << "1. Add"<<endl;
    cout << "2. Subtract"<<endl;
    cout << "3. Multiply"<<endl;
    cout << "4. Divide"<<endl;

    cout << "Enter your choice: "<<endl;
    cin >> choice;

    if(choice == 1)
        cout <<"Result:" << c1.add();
    else if(choice == 2)
        cout <<"Result:" << c1.subtract();
    else if(choice == 3)
        cout <<"Result:" << c1.multiply();
    else if(choice == 4)
        cout <<"Result:" << c1.divide();
    else
        cout << "Invalid choice";
    return 0;
}
