#ifndef CHARTERFLIGHT_H
#define CHARTERFLIGHT_H

#include "Flight.h"

class CharterFlight : public Flight
{
private:
    string contractHolder;
    double charterFee;

public:
    CharterFlight();

    CharterFlight(string fn,
                  string org,
                  string dest,
                  string date,
                  int total,
                  int available,
                  string holder,
                  double fee);

    void setContractHolder(string holder);
    string getContractHolder() const;

    void setCharterFee(double fee);
    double getCharterFee() const;

    virtual double calculateBaseFare();
    virtual void displayDetails();
};

#endif
