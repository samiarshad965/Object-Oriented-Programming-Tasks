#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>

using namespace std;

class FlightFullException
{
public:
    void showMessage()
    {
        cout << "\nError: Flight is Full!\n";
    }
};

class InvalidTicketException
{
public:
    void showMessage()
    {
        cout << "\nError: Ticket Not Found!\n";
    }
};

#endif
