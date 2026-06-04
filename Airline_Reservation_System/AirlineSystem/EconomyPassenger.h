#ifndef ECONOMYPASSENGER_H
#define ECONOMYPASSENGER_H

#include "Passenger.h"

class EconomyPassenger : public Passenger
{
public:
    EconomyPassenger();

    EconomyPassenger(int id,
                     string n,
                     string passport);

    double calculateRefund(double fare);

    int getBaggageAllowance();

    void displayDetails();
};

#endif
