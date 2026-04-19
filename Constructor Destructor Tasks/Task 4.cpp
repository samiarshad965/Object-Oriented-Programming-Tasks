#include <iostream>
using namespace std;
// Base class 1
class Printer 
{
public:
    void print_document() 
	{
        cout << "Printing document..." << endl;
    }
};

// Base class 2
class Scanner 
{
public:
    void scan_document() 
	{
        cout << "Scanning document" << endl;
    }
};

// Derived class (Multiple Inheritance)
class Photocopier : public Printer, public Scanner {
public:
    void photocopy() {
        cout << "Photocopying document..." << endl;
        print_document();   // from Printer
        scan_document();    // from Scanner
    }
};

int main() 
{
    Photocopier p1;
    p1.print_document();
    p1.scan_document();
    p1.photocopy();
    return 0;
}
