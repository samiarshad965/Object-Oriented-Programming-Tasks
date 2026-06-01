#ifndef DOMESTICFLIGHT_H
#define DOMESTICFLIGHT_H

#include "Flight.h"

class DomesticFlight : public Flight {
private:
    double baseFare;

public:
    DomesticFlight(string fn, string org, string dest, string dt, int seats, double fare)
        : Flight(fn, org, dest, dt, seats) {
        baseFare = fare;
    }

    double calculateBaseFare() override {
        return baseFare;
    }

    void displayDetails() override {
        cout << "\n--- Domestic Flight ---\n";
        cout << *this << endl;
        cout << "Fare: " << baseFare << endl;
    }
};

#endif
