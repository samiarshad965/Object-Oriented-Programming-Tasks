#include <iostream>
#include "Voter.h"
using namespace std;
int main()
{
	// object
    Voter v1;
    string name;
    int age;

    cout << "Enter your name: "<<endl;
    cin >> name;
    cout << "Enter your age: "<<endl;
    cin >> age;

    v1.setData(name, age);
    if(v1.isEligible())
        cout << "You are eligible for voting!";
    else
        cout << "You are not eligible for voting!";
    return 0;
}
