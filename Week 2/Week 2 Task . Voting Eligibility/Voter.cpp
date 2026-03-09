#include "Voter.h"
void Voter::setData(string n, int a)
{
    name = n;
    age = a;
}
bool Voter::isEligible()
{
    if(age > 18)
        return true;
    else
        return false;
}
