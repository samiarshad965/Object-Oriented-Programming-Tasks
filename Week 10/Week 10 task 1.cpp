#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ofstream writeFile("notes.txt");

    writeFile << "First line:"<< endl;
    writeFile << "Second line:"<< endl;
    writeFile << "Third line:" << endl;

    writeFile.close();

    // read
    ifstream readFile("notes.txt");
    string line;

    cout << "File Content:"<< endl;
    while (getline(readFile, line)) 
	{
        cout << line << endl;
    }

    readFile.close();

    // append
    ofstream appendFile("notes.txt", ios::app);

    appendFile << "Name: Samia Arshad"<< endl;
    appendFile << "Roll Number: 15"<< endl;
    appendFile.close();

    return 0;
}
