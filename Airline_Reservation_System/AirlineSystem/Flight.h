#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <stdexcept>
using namespace std;

class Flight {
private:
    int id;
    string no, route, date;
    double fare;
    int seats, booked;
    double revenue;

public:
    Flight(){}

    Flight(int i,string n,string r,string d,double f,int s=50){
        id=i; no=n; route=r; date=d;
        fare=f; seats=s;
        booked=0; revenue=0;
    }

    int getID(){ return id; }
    string getRoute(){ return route; }
    string getDate(){ return date; }
    double getFare(){ return fare; }

    bool isFull(){ return booked>=seats; }

    void bookSeat(){
        if(isFull()) throw runtime_error("Flight Full!");
        booked++; revenue+=fare;
    }

    void cancelSeat(){
        booked--; revenue-=fare;
    }

    double getOccupancy(){
        return (booked*100.0)/seats;
    }

    double getRevenue(){ return revenue; }

    void display(){
        cout << "\nFlight ID: " << id
             << "\nNo: " << no
             << "\nRoute: " << route
             << "\nDate: " << date
             << "\nFare: " << fare
             << "\nSeats: " << booked << "/" << seats
             << "\nOccupancy: " << getOccupancy() << "%\n";
    }
};

#endif
