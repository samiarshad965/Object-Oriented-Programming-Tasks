#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ofstream fout("students.txt");
    fout << "Sara 15" << endl;
    fout << "Sana 13"<< endl;
    fout << "Ali 10" << endl;

    fout.close();
    ifstream fin("students.txt");
    string n;
    int r_no;

    cout << "Students:"<< endl;
    while (fin >> n >> r_no) {
        cout << "Name: " << n << ",Roll No: " << r_no << endl;
    }

    fin.close();
    return 0;
}
