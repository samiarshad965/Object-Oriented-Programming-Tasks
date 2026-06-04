#include "DomesticFlight.h"

DomesticFlight::DomesticFlight()
{
    distance = 0;
}

DomesticFlight::DomesticFlight(string fn, string org, string dest, string date, int total, int available, double dist) : Flight(fn, org, dest, date, total, available)
{
    distance = dist;
}

void DomesticFlight::setDistance(double dist)
{
    distance = dist;
}

double DomesticFlight::getDistance() const
{
    return distance;
}

double DomesticFlight::calculateBaseFare()
{
    return distance * 5;
}

void DomesticFlight::displayDetails()
{
    cout << "\n===== Domestic Flight =====\n";

    cout << *this;

    cout << "\nDistance: "
         << distance
         << " KM";

    cout << "\nBase Fare: "
         << calculateBaseFare();

    cout << endl;
}
