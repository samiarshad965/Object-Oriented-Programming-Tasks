#include<iostream>
#include<fstream>
using namespace std;
int main()
{ 
ifstream inFile("notes.txt");
ofstream outFile("notes_copy.txt");
string line;
if ( inFile.is_open() && outFile.is_open ())
{
	while (getline(inFile, line))
	{
		outFile << line << endl;
	}
	inFile.close();
	outFile.close();
	cout<<" Content copied"<<endl;
}
else 
{
	cout<<" error";
	return 1;
}
return 0;
}
