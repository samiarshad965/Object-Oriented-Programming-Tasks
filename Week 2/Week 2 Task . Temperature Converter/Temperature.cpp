#include "Temperature.h"
float Temperature::convert()
{
    float fahrenheit;
    fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}
void Temperature::display(float f)
{
    cout << "Temperature in Fahrenheit: " << f << endl;
}
