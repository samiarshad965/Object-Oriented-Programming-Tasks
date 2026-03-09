#include <iostream>
#include "Temperature.h"
using namespace std;
int main()
{
    Temperature t1;
    float f;
    cout <<"Enter temperature in Celsius: "<<endl;
    cin >>t1.celsius;

    f = t1.convert();
    t1.display(f);
    return 0;
}
