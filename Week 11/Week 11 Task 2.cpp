#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    // Friend function
    friend void addDistance(Distance d1, Distance d2);
};

// definition
void addDistance(Distance d1, Distance d2) {
    int totalFeet = d1.feet + d2.feet;
    int totalInches = d1.inches + d2.inches;

    cout << "Total Distance : "
         << totalFeet << " feet "
         << totalInches << " inches" << endl;
}

int main() 
{
    Distance d1(4, 8);
    Distance d2(6, 3);
    addDistance(d1, d2);

    return 0;
}
