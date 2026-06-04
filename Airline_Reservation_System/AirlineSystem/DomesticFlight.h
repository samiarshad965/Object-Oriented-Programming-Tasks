#ifndef DOMESTICFLIGHT_H
#define DOMESTICFLIGHT_H

#include "Flight.h"

class DomesticFlight : public Flight
{
private:
    double distance;

public:
    DomesticFlight();

    DomesticFlight(string fn, string org, string dest, string date, int total, int available, double dist);
    void setDistance(double dist);
    double getDistance() const;

    virtual double calculateBaseFare();
    virtual void displayDetails();
};

#endif
