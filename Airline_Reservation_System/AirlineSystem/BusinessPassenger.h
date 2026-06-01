#ifndef BUSINESSPASSENGER_H
#define BUSINESSPASSENGER_H

#include "Passenger.h"

class BusinessPassenger : public Passenger {
public:
    BusinessPassenger(string id, string n)
        : Passenger(id, n) {}

    double refundPercentage() override {
        return 0.75; // 75% refund
    }

    void display() override {
        cout << "\n--- Business Passenger ---\n";
        Passenger::display();
        cout << "Refund: 75%" << endl;
    }
};

#endif
