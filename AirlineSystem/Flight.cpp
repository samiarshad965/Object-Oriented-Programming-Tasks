#include "Flight.h"

Flight::Flight()
{
    flightNumber = "";
    origin = "";
    destination = "";
    departureDate = "";
    totalSeats = 0;
    availableSeats = 0;
}

Flight::Flight(string fn, string org, string dest,
               string date, int total, int available)
{
    flightNumber = fn;
    origin = org;
    destination = dest;
    departureDate = date;
    totalSeats = total;
    availableSeats = available;
}

Flight::~Flight()
{
}

void Flight::setFlightNumber(string fn)
{
    flightNumber = fn;
}

string Flight::getFlightNumber() const
{
    return flightNumber;
}

void Flight::setOrigin(string org)
{
    origin = org;
}

string Flight::getOrigin() const
{
    return origin;
}

void Flight::setDestination(string dest)
{
    destination = dest;
}

string Flight::getDestination() const
{
    return destination;
}

void Flight::setDepartureDate(string date)
{
    departureDate = date;
}

string Flight::getDepartureDate() const
{
    return departureDate;
}

void Flight::setTotalSeats(int total)
{
    totalSeats = total;
}

int Flight::getTotalSeats() const
{
    return totalSeats;
}

void Flight::setAvailableSeats(int available)
{
    availableSeats = available;
}

int Flight::getAvailableSeats() const
{
    return availableSeats;
}

ostream& operator<<(ostream& out, Flight& f)
{
    out << "\nFlight Number: " << f.flightNumber;
    out << "\nOrigin: " << f.origin;
    out << "\nDestination: " << f.destination;
    out << "\nDeparture Date: " << f.departureDate;
    out << "\nTotal Seats: " << f.totalSeats;
    out << "\nAvailable Seats: " << f.availableSeats;

    return out;
}
