#ifndef FIRSTCLASSPASSENGER_H
#define FIRSTCLASSPASSENGER_H

#include "Passenger.h"

class FirstClassPassenger : public Passenger {
public:
    FirstClassPassenger(string id, string n)
        : Passenger(id, n) {}

    double refundPercentage() override {
        return 0.9; // 90% refund
    }

    void display() override {
        cout << "\n--- First Class Passenger ---\n";
        Passenger::display();
        cout << "Refund: 90%" << endl;
    }
};

#endif
