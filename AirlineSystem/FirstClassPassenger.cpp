#include "FirstClassPassenger.h"

FirstClassPassenger::FirstClassPassenger()
: Passenger()
{
}

FirstClassPassenger::FirstClassPassenger(int id,
                                         string n,
                                         string passport)
: Passenger(id, n, passport)
{
}

double FirstClassPassenger::calculateRefund(double fare)
{
    return fare * 0.90;
}

int FirstClassPassenger::getBaggageAllowance()
{
    return 50;
}

void FirstClassPassenger::displayDetails()
{
    cout << "\n===== First Class Passenger =====\n";

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
