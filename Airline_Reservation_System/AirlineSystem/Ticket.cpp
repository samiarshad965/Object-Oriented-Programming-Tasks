#include "Ticket.h"

Ticket::Ticket()
{
    ticketID = 0;
    flightNumber = "";
    passengerID = 0;
    seatNumber = 0;
    farePaid = 0;
    bookingStatus = "Booked";
}

Ticket::Ticket(int tid,
               string flightNo,
               int pid,
               int seat,
               double fare,
               string status)
{
    ticketID = tid;
    flightNumber = flightNo;
    passengerID = pid;
    seatNumber = seat;
    farePaid = fare;
    bookingStatus = status;
}

void Ticket::setTicketID(int tid)
{
    ticketID = tid;
}

int Ticket::getTicketID() const
{
    return ticketID;
}

void Ticket::setFlightNumber(string flightNo)
{
    flightNumber = flightNo;
}

string Ticket::getFlightNumber() const
{
    return flightNumber;
}

void Ticket::setPassengerID(int pid)
{
    passengerID = pid;
}

int Ticket::getPassengerID() const
{
    return passengerID;
}

void Ticket::setSeatNumber(int seat)
{
    seatNumber = seat;
}

int Ticket::getSeatNumber() const
{
    return seatNumber;
}

void Ticket::setFarePaid(double fare)
{
    farePaid = fare;
}

double Ticket::getFarePaid() const
{
    return farePaid;
}

void Ticket::setBookingStatus(string status)
{
    bookingStatus = status;
}

string Ticket::getBookingStatus() const
{
    return bookingStatus;
}

bool Ticket::operator==(const Ticket& other)
{
    return ticketID == other.ticketID;
}

ostream& operator<<(ostream& out,
                    const Ticket& ticket)
{
    out << "\nTicket ID: "
        << ticket.ticketID;

    out << "\nFlight Number: "
        << ticket.flightNumber;

    out << "\nPassenger ID: "
        << ticket.passengerID;

    out << "\nSeat Number: "
        << ticket.seatNumber;

    out << "\nFare Paid: "
        << ticket.farePaid;

    out << "\nBooking Status: "
        << ticket.bookingStatus;

    return out;
}
