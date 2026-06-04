#include "BusinessPassenger.h"

BusinessPassenger::BusinessPassenger()
: Passenger()
{
}

BusinessPassenger::BusinessPassenger(int id,
                                     string n,
                                     string passport)
: Passenger(id, n, passport)
{
}

double BusinessPassenger::calculateRefund(double fare)
{
    return fare * 0.75;
}

int BusinessPassenger::getBaggageAllowance()
{
    return 35;
}

void BusinessPassenger::displayDetails()
{
    cout << "\n===== Business Passenger =====\n";

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
