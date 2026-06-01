#ifndef INTERNATIONALFLIGHT_H
#define INTERNATIONALFLIGHT_H

#include "Flight.h"

class InternationalFlight : public Flight {
private:
    double baseFare;
    double tax;
    double extraCharges;

public:
    InternationalFlight(string fn, string org, string dest, string dt, int seats,
                        double fare, double t, double extra)
        : Flight(fn, org, dest, dt, seats) {
        baseFare = fare;
        tax = t;
        extraCharges = extra;
    }

    double calculateBaseFare() override {
        return baseFare + (baseFare * tax) + extraCharges;
    }

    void displayDetails() override {
        cout << "\n--- International Flight ---\n";
        cout << *this << endl;
        cout << "Total Fare: " << calculateBaseFare() << endl;
    }
};

#endif
