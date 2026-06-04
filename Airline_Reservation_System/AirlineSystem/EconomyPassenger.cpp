#include "EconomyPassenger.h"

EconomyPassenger::EconomyPassenger()
: Passenger()
{
}

EconomyPassenger::EconomyPassenger(int id,
                                   string n,
                                   string passport)
: Passenger(id, n, passport)
{
}

double EconomyPassenger::calculateRefund(double fare)
{
    return fare * 0.50;
}

int EconomyPassenger::getBaggageAllowance()
{
    return 20;
}

void EconomyPassenger::displayDetails()
{
    cout << "\n===== Economy Passenger =====\n";

    cout << "\nPassenger ID: "
         << passengerID;

    cout << "\nName: "
         << name;

    cout << "\nPassport Number: "
         << passportNumber;

    cout << "\nBaggage Allowance: "
         << getBaggageAllowance()
         << " KG";

    cout << endl;
}
