#include <iostream>
using namespace std;
// Base class
class File {
public:
	//constructor
    File() {
        cout << "File opened" << endl;
    }
    //destructor
    ~File() {
        cout << "File closed" << endl;
    }
};

    // Derived class
class TextFile : public File {
public:
	//constructor
    TextFile() {
        cout << "TextFile opened" << endl;
    }
    //destructor       
    ~TextFile() {
        cout << "TextFile closed" << endl;
    }
};

int main() 
{
    TextFile t1;
    return 0;
}
