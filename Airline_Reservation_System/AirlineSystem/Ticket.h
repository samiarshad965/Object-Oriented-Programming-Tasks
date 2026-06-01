#ifndef TICKET_H
#define TICKET_H

#include "Passenger.h"
#include "Flight.h"

class Ticket {
protected:
    int id;
    Passenger p;
    Flight f;
    double price;
    string status;

public:
    Ticket(int i, Passenger pa, Flight fl, double pr){
        id=i; p=pa; f=fl; price=pr;
        status="Booked";
    }

    virtual double refund() = 0;

    int getID(){ return id; }
    int getFlightID(){ return f.getID(); }

    void cancel(){
        status="Cancelled";
        f.cancelSeat();
    }

    virtual void display(){
        cout << "\nTicket ID: " << id << endl;
        p.display();
        f.display();
        cout << "Price: " << price
             << "\nStatus: " << status << endl;
    }
};

#endif
