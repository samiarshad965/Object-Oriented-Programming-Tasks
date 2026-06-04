#ifndef FIRSTCLASSPASSENGER_H
#define FIRSTCLASSPASSENGER_H

#include "Passenger.h"

class FirstClassPassenger : public Passenger
{
public:
    FirstClassPassenger();

    FirstClassPassenger(int id,
                        string n,
                        string passport);

    double calculateRefund(double fare);

    int getBaggageAllowance();

    void displayDetails();
};

#endif
