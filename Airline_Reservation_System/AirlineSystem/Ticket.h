#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <string>

using namespace std;

class Ticket
{
private:
    int ticketID;
    string flightNumber;
    int passengerID;
    int seatNumber;
    double farePaid;
    string bookingStatus;

public:
    Ticket();

    Ticket(int tid,
           string flightNo,
           int pid,
           int seat,
           double fare,
           string status);

    void setTicketID(int tid);
    int getTicketID() const;

    void setFlightNumber(string flightNo);
    string getFlightNumber() const;

    void setPassengerID(int pid);
    int getPassengerID() const;

    void setSeatNumber(int seat);
    int getSeatNumber() const;

    void setFarePaid(double fare);
    double getFarePaid() const;

    void setBookingStatus(string status);
    string getBookingStatus() const;

    bool operator==(const Ticket& other);

    friend ostream& operator<<(ostream& out,
                               const Ticket& ticket);
};

#endif
