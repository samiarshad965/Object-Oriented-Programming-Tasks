#include "CharterFlight.h"

CharterFlight::CharterFlight()
{
    contractHolder = "";
    charterFee = 0;
}

CharterFlight::CharterFlight(string fn,
                             string org,
                             string dest,
                             string date,
                             int total,
                             int available,
                             string holder,
                             double fee)
: Flight(fn, org, dest, date, total, available)
{
    contractHolder = holder;
    charterFee = fee;
}

void CharterFlight::setContractHolder(string holder)
{
    contractHolder = holder;
}

string CharterFlight::getContractHolder() const
{
    return contractHolder;
}

void CharterFlight::setCharterFee(double fee)
{
    charterFee = fee;
}

double CharterFlight::getCharterFee() const
{
    return charterFee;
}

double CharterFlight::calculateBaseFare()
{
    return charterFee;
}

void CharterFlight::displayDetails()
{
    cout << "\n===== Charter Flight =====\n";

    cout << *this;

    cout << "\nContract Holder: "
         << contractHolder;

    cout << "\nCharter Fee: "
         << charterFee;

    cout << "\nBase Fare: "
         << calculateBaseFare();

    cout << endl;
}
