#include <iostream>
#ifndef TEMPERATURE_H
#define TEMPERATURE_H
using namespace std;

class Temperature
{
public:
    float celsius;
    float convert();
    void display(float f);
};
#endif
