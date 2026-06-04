#ifndef BUSINESSPASSENGER_H
#define BUSINESSPASSENGER_H

#include "Passenger.h"

class BusinessPassenger : public Passenger
{
public:
    BusinessPassenger();

    BusinessPassenger(int id,
                      string n,
                      string passport);

    double calculateRefund(double fare);

    int getBaggageAllowance();

    void displayDetails();
};

#endif
