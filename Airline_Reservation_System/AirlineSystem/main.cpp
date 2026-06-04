#include <iostream>

#include "Airline.h"
#include "DomesticFlight.h"
#include "EconomyPassenger.h"
#include "BusinessPassenger.h"
#include "FirstClassPassenger.h"
#include "Exceptions.h"

using namespace std;

int main()
{
    Airline airline;

    int choice;

    do
    {
        cout << "\n\n==================================================";
        cout << "\n           ::SKYLINK AIRWAYS::";
        cout << "\n Airline Reservation and Flight Management System";
        cout << "\n===================================================="<<endl;
        
        cout << "====Main Menu====";
        cout << "\n1. Add Flight";
        cout << "\n2. Add Passenger";
        cout << "\n3. Search Flight";
        cout << "\n4. Book Ticket";
        cout << "\n5. Cancel Ticket";
        cout << "\n6. Display All Flights";
        cout << "\n7. Display All Passengers";
        cout << "\n8. Display All Tickets";
        cout << "\n9. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
        {
            string flightNo;
            string origin;
            string destination;
            string date;

            int totalSeats;
            int availableSeats;

            double distance;

            cout << "\n===== Add Flight =====\n";

            cout << "Flight Number: ";
            cin >> flightNo;

            cout << "Origin: ";
            cin >> origin;

            cout << "Destination: ";
            cin >> destination;

            cout << "Departure Date: ";
            cin >> date;

            cout << "Total Seats: ";
            cin >> totalSeats;

            cout << "Available Seats: ";
            cin >> availableSeats;

            cout << "Distance (KM): ";
            cin >> distance;

            airline.addFlight(
                new DomesticFlight(
                    flightNo,
                    origin,
                    destination,
                    date,
                    totalSeats,
                    availableSeats,
                    distance
                )
            );

            cout << "\nFlight Added Successfully!\n";
            break;
        }

    case 2:
{
    int id, type;
    string name, passport;

    cout << "\n===== Add Passenger =====\n";

    cout << "Passenger ID: ";
    cin >> id;

    cin.ignore();

    cout << "Passenger Name: ";
    getline(cin, name);

    cout << "Passport Number: ";
    getline(cin, passport);

    cout << "\nPassenger Type:\n";
    cout << "1. Economy Passenger\n";
    cout << "2. Business Passenger\n";
    cout << "3. First Class Passenger\n";
    cout << "Enter Choice: ";
    cin >> type;

    Passenger* p = NULL;

    if(type == 1)
    {
        p = new EconomyPassenger(id, name, passport);
    }
    else if(type == 2)
    {
        p = new BusinessPassenger(id, name, passport);
    }
    else if(type == 3)
    {
        p = new FirstClassPassenger(id, name, passport);
    }
    else
    {
        cout << "\nInvalid Passenger Type!\n";
        break;
    }

    airline.addPassenger(p);

    cout << "\nPassenger Registered Successfully!\n";
}
break;
        case 3:
        {
            string flightNo;

            cout << "\n===== Search Flight =====\n";

            cout << "Enter Flight Number: ";
            cin >> flightNo;

            airline.searchFlightByNumber(flightNo);

            break;
        }

        case 4:
        {
            int ticketID;
            int passengerID;
            string flightNo;

            cout << "\n===== Book Ticket =====\n";

            cout << "Ticket ID: ";
            cin >> ticketID;

            cout << "Flight Number: ";
            cin >> flightNo;

            cout << "Passenger ID: ";
            cin >> passengerID;

            try
            {
                airline.bookTicket(
                    ticketID,
                    flightNo,
                    passengerID
                );
            }
            catch(FlightFullException e)
            {
                e.showMessage();
            }

            break;
        }

        case 5:
        {
            int ticketID;

            cout << "\n===== Cancel Ticket =====\n";

            cout << "Enter Ticket ID: ";
            cin >> ticketID;

            try
            {
                airline.cancelTicket(ticketID);
            }
            catch(InvalidTicketException e)
            {
                e.showMessage();
            }

            break;
        }

        case 6:
        {
            cout << "\n===== Flight Records =====\n";

            airline.displayFlights();

            break;
        }

        case 7:
        {
            cout << "\n===== Passenger Records =====\n";

            airline.displayPassengers();

            break;
        }

        case 8:
        {
            cout << "\n===== Ticket Records =====\n";

            airline.displayTickets();

            break;
        }

        case 9:
        {
            cout << "\nThank You For Using SkyLink Airways System\n";
            cout << "\nProgram Closed Successfully\n";

            break;
        }

        default:
        {
            cout << "\nInvalid Choice! Try Again.\n";
        }
        }

    }
    while(choice != 9);

    return 0;
}
