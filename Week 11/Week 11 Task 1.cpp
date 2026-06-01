#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    // Constructor
    Box(int l) {
        length = l;
    }

    // Friend function
    friend void displayLength(Box b);
};

//definition
void displayLength(Box b) {
    cout << "Length of box: " << b.length << endl;
}

int main() 
{
    Box b1(15);
    displayLength(b1);
    return 0;
}
