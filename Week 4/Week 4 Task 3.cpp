#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Default Constructor
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    // Parameterized Constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    Rectangle(float side) {
        length = width = side;
    }

    float area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << " , Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() 
{
    Rectangle rect1;       
	Rectangle rect2(4.0, 5.0);
    Rectangle square(6.0);    

    cout << "Rectangle 1 (Default):" << endl;
    rect1.display();

    cout << "Rectangle 2" << endl;
    rect2.display();

    cout << "Square" << endl;
    square.display();
    return 0;
}
