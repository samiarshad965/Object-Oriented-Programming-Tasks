#ifndef CHARTERFLIGHT_H
#define CHARTERFLIGHT_H

#include "Flight.h"

class CharterFlight : public Flight {
private:
    double fixedCost;
    string contractHolder;

public:
    CharterFlight(string fn, string org, string dest, string dt, int seats,
                  double cost, string holder)
        : Flight(fn, org, dest, dt, seats) {
        fixedCost = cost;
        contractHolder = holder;
    }

    double calculateBaseFare() override {
        return fixedCost;
    }

    void displayDetails() override {
        cout << "\n--- Charter Flight ---\n";
        cout << *this << endl;
        cout << "Contract Holder: " << contractHolder << endl;
        cout << "Cost: " << fixedCost << endl;
    }
};

#endif
