#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <vector>
using namespace std;

class Passenger {
private:
    int id;
    string name;
    string phone;
    string type;
    vector<int> history;

public:
    Passenger() {}

    Passenger(int i, string n, string p, string t="Economy") {
        id=i; name=n; phone=p; type=t;
    }

    int getID(){ return id; }
    string getName(){ return name; }
    string getType(){ return type; }

    bool alreadyBooked(int flightID){
        for(int x:history)
            if(x==flightID) return true;
        return false;
    }

    void addHistory(int flightID){
        history.push_back(flightID);
    }

    void showHistory(){
        cout << "\nBooking History of " << name << ":\n";
        for(int x:history)
            cout << "Flight ID: " << x << endl;
    }

    void display(){
        cout << "ID: " << id << " Name: " << name
             << " Phone: " << phone
             << " Type: " << type << endl;
    }
};

#endif
