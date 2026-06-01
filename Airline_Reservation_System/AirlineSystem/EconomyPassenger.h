#ifndef ECONOMYPASSENGER_H
#define ECONOMYPASSENGER_H

#include "Passenger.h"

class EconomyPassenger : public Passenger {
public:
    EconomyPassenger(string id, string n)
        : Passenger(id, n) {}

    double refundPercentage() override {
        return 0.5; // 50% refund
    }

    void display() override {
        cout << "\n--- Economy Passenger ---\n";
        Passenger::display();
        cout << "Refund: 50%" << endl;
    }
};

#endif
