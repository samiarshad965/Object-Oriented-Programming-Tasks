#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>

using namespace std;

class Flight
{
protected:
    string flightNumber;
    string origin;
    string destination;
    string departureDate;
    int totalSeats;
    int availableSeats;

public:
    Flight();
    Flight(string fn, string org, string dest,
           string date, int total, int available);

    virtual ~Flight();

    void setFlightNumber(string fn);
    string getFlightNumber() const;

    void setOrigin(string org);
    string getOrigin() const;

    void setDestination(string dest);
    string getDestination() const;

    void setDepartureDate(string date);
    string getDepartureDate() const;

    void setTotalSeats(int total);
    int getTotalSeats() const;

    void setAvailableSeats(int available);
    int getAvailableSeats() const;

    virtual double calculateBaseFare() = 0;
    virtual void displayDetails() = 0;

    friend ostream& operator<<(ostream& out, Flight& f);
};

#endif
