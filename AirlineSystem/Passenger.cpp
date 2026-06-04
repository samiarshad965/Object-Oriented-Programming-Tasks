#include "Passenger.h"

// Default Constructor
Passenger::Passenger()
{
    passengerID = 0;
    name = "";
    passportNumber = "";
}

// Parameterized Constructor
Passenger::Passenger(
    int id,
    string n,
    string passport)
{
    passengerID = id;
    name = n;
    passportNumber = passport;
}

// Destructor
Passenger::~Passenger()
{
}

// Set Passenger ID
void Passenger::setPassengerID(int id)
{
    passengerID = id;
}

// Get Passenger ID
int Passenger::getPassengerID() const
{
    return passengerID;
}

// Set Name
void Passenger::setName(string n)
{
    name = n;
}

// Get Name
string Passenger::getName() const
{
    return name;
}

// Set Passport Number
void Passenger::setPassportNumber(string passport)
{
    passportNumber = passport;
}

// Get Passport Number
string Passenger::getPassportNumber() const
{
    return passportNumber;
}
