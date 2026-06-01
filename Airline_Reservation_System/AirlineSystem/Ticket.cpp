#include "Ticket.h"
#include <iostream>
using namespace std;

Ticket::Ticket(int tID, Passenger p, Flight f, string seat, double fare) {
    ticketID = tID;
    passenger = p;
    flight = f;
    seatNumber = seat;
    this->fare = fare;
    status = "Booked";

    flight.bookSeat();
}

int Ticket::getTicketID() {
    return ticketID;
}

void Ticket::cancelTicket() {
    if (status == "Cancelled") {
        cout << "Already Cancelled!\n";
        return;
    }

    status = "Cancelled";
    flight.cancelSeat();

    cout << "Ticket Cancelled Successfully!\n";
}

void Ticket::displayTicket() {
    cout << "\n========== TICKET ==========\n";
    cout << "Ticket ID: " << ticketID << endl;

    passenger.displayPassenger();
    flight.displayFlight();

    cout << "Seat No: " << seatNumber << endl;
    cout << "Fare: " << fare << endl;
    cout << "Status: " << status << endl;
}
