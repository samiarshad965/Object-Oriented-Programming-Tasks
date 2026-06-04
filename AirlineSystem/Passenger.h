#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>

using namespace std;

class Passenger
{
protected:
    int passengerID;
    string name;
    string passportNumber;

public:
    Passenger();

    Passenger(int id,
              string n,
              string passport);

    virtual ~Passenger();

    void setPassengerID(int id);
    int getPassengerID() const;

    void setName(string n);
    string getName() const;

    void setPassportNumber(string passport);
    string getPassportNumber() const;

    virtual double calculateRefund(double fare) = 0;
    virtual int getBaggageAllowance() = 0;

    virtual void displayDetails() = 0;
};

#endif
