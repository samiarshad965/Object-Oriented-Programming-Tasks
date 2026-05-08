#include <iostream>
using namespace std;
class Distance 
{
private:
    int feet;
    int inches;

public:
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    bool operator == (Distance d1) {
        if (feet == d1.feet && inches == d1.inches)
            return true;
        else 
            return false;
    }

};

int main() 
{
    Distance d1(6, 2);
    Distance d2(4, 11);
    Distance d3(6, 2);
    if (d1 == d2)
        cout << "d1 and d2 are equal" << endl;
    else 
        cout << "d1 and d2 are not equal" << endl;

    if (d1 == d3)
        cout << "d1 and d3 are equal" << endl;
    else 
        cout << "d1 and d3 are not equal" << endl;
    return 0;
}
