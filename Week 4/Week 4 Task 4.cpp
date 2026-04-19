#include <iostream>
using namespace std;

class Locker {
public:
    // Constructor
    Locker() {
        cout << "Locker allocated to customer." << endl;
    }

    // Destructor
    ~Locker() {
        cout << "Locker returned by customer." << endl;
    }
};

int main()
{
    {
        Locker locker1;
        cout << "Created on stack." << endl;
    } 

    cout << endl;

    Locker* locker2 = new Locker();
    cout << "Created on heap." << endl;
    delete locker2; // destructor called
    return 0;
}
