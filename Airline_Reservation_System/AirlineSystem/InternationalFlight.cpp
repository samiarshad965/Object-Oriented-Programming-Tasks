#include "InternationalFlight.h"

InternationalFlight::InternationalFlight()
{
    visaRequired = false;
    internationalTax = 0;
}

InternationalFlight::InternationalFlight(string fn, string org, string dest, string date, int total, int available, bool visa, double tax)
: Flight(fn, org, dest, date, total, available)
{
    visaRequired = visa;
    internationalTax = tax;
}

void InternationalFlight::setVisaRequired(bool visa)
{
    visaRequired = visa;
}

bool InternationalFlight::getVisaRequired() const
{
    return visaRequired;
}

void InternationalFlight::setInternationalTax(double tax)
{
    internationalTax = tax;
}

double InternationalFlight::getInternationalTax() const
{
    return internationalTax;
}

double InternationalFlight::calculateBaseFare()
{
    return 25000 + internationalTax;
}

void InternationalFlight::displayDetails()
{
    cout << "\n===== International Flight =====\n";

    cout << *this;

    cout << "\nVisa Required: ";

    if(visaRequired)
        cout << "Yes";
    else
        cout << "No";

    cout << "\nInternational Tax: "
         << internationalTax;

    cout << "\nBase Fare: "
         << calculateBaseFare();

    cout << endl;
}
