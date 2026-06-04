#ifndef AIRLINE_H
#define AIRLINE_H

#include "Flight.h"
#include "Passenger.h"
#include "Ticket.h"
#include "Exceptions.h"
class Airline
{
private:

    Flight* flights[100];
    Passenger* passengers[100];
    Ticket tickets[500];

    int flightCount;
    int passengerCount;
    int ticketCount;

public:

    Airline();

    void addFlight(Flight* flight);

    void addPassenger(Passenger* passenger);

    void addTicket(Ticket ticket);

    void displayFlights();

    void displayPassengers();

    void displayTickets();

    Flight* searchFlight(string flightNo);

    Passenger* searchPassenger(int passengerID);

    int getFlightCount();

    int getPassengerCount();

    int getTicketCount();
    
    void bookTicket(int ticketID,
                string flightNo,
                int passengerID);

void searchFlightByNumber(string flightNo);

    void cancelTicket(int ticketID);
    
};

#endif
