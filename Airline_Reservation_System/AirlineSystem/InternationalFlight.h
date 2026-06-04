#ifndef INTERNATIONALFLIGHT_H
#define INTERNATIONALFLIGHT_H

#include "Flight.h"

class InternationalFlight : public Flight
{
private:
    bool visaRequired;
    double internationalTax;

public:
    InternationalFlight();

    InternationalFlight(string fn, string org, string dest, string date, int total, int available, bool visa, double tax);

    void setVisaRequired(bool visa);
    bool getVisaRequired() const;

    void setInternationalTax(double tax);
    double getInternationalTax() const;

    virtual double calculateBaseFare();
    virtual void displayDetails();
};

#endif
