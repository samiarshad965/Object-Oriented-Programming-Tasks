#include "Airline.h"

Airline::Airline()
{
    flightCount = 0;
    passengerCount = 0;
    ticketCount = 0;
}

void Airline::addFlight(Flight* flight)
{
    if(flightCount < 100)
    {
        flights[flightCount] = flight;
        flightCount++;
    }
}

void Airline::addPassenger(Passenger* passenger)
{
    if(passengerCount < 100)
    {
        passengers[passengerCount] = passenger;
        passengerCount++;
    }
}

void Airline::addTicket(Ticket ticket)
{
    if(ticketCount < 500)
    {
        tickets[ticketCount] = ticket;
        ticketCount++;
    }
}

void Airline::displayFlights()
{
    int i;

    for(i = 0; i < flightCount; i++)
    {
        flights[i]->displayDetails();
        cout << endl;
    }
}

void Airline::displayPassengers()
{
    int i;

    for(i = 0; i < passengerCount; i++)
    {
        passengers[i]->displayDetails();
        cout << endl;
    }
}

void Airline::displayTickets()
{
    int i;

    for(i = 0; i < ticketCount; i++)
    {
        cout << tickets[i];
        cout << endl;
    }
}

Flight* Airline::searchFlight(string flightNo)
{
    int i;

    for(i = 0; i < flightCount; i++)
    {
        if(flights[i]->getFlightNumber() == flightNo)
        {
            return flights[i];
        }
    }

    return NULL;
}

Passenger* Airline::searchPassenger(int passengerID)
{
    int i;

    for(i = 0; i < passengerCount; i++)
    {
        if(passengers[i]->getPassengerID() == passengerID)
        {
            return passengers[i];
        }
    }

    return NULL;
}

int Airline::getFlightCount()
{
    return flightCount;
}

int Airline::getPassengerCount()
{
    return passengerCount;
}

int Airline::getTicketCount()
{
    return ticketCount;
}
void Airline::searchFlightByNumber(string flightNo)
{
    Flight* flight = searchFlight(flightNo);

    if(flight != NULL)
    {
        cout << "\nFlight Found\n";
        flight->displayDetails();
    }
    else
    {
        cout << "\nFlight Not Found\n";
    }
}
void Airline::bookTicket(int ticketID,
                         string flightNo,
                         int passengerID)
{
    Flight* flight = searchFlight(flightNo);

    Passenger* passenger =
        searchPassenger(passengerID);

    if(flight == NULL)
    {
        cout << "\nFlight Not Found\n";
        return;
    }

    if(passenger == NULL)
    {
        cout << "\nPassenger Not Found\n";
        return;
    }

   if(flight->getAvailableSeats() <= 0)
{
    throw FlightFullException();
}

    int seatNo;

    seatNo =
    flight->getTotalSeats()
    -
    flight->getAvailableSeats()
    + 1;

    Ticket t(
        ticketID,
        flightNo,
        passengerID,
        seatNo,
        flight->calculateBaseFare(),
        "Booked"
    );

    addTicket(t);

    flight->setAvailableSeats(
        flight->getAvailableSeats() - 1
    );

    cout << "\nTicket Booked Successfully\n";
}
void Airline::cancelTicket(int ticketID)
{
    int i;

    for(i = 0; i < ticketCount; i++)
    {
        if(tickets[i].getTicketID() == ticketID)
        {
            tickets[i].setBookingStatus("Cancelled");

            cout << "\nTicket Cancelled Successfully\n";

            return;
        }
    }

    throw InvalidTicketException();
}
