#include <iostream>
#include <string>
using namespace std;

template <typename T>
void printTwice(T val) 
{
    cout << val << endl;
    cout << val << endl;
}

int main() 
{
    cout << "int test:" << endl;
    printTwice(45);
    
    cout << "\ndouble test:" << endl;
    printTwice(45.99);
    
    cout << "\nstring test:" << endl;
    printTwice("C++");
    
    return 0;
}
