#include <iostream>
#ifndef VOTER_H
#define VOTER_H
using namespace std;

class Voter
{
private:
    string name;
    int age;

public:
    void setData(string n, int a);
    bool isEligible();
};
#endif
