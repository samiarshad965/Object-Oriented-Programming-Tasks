#include <iostream>
#include <vector>
#include <fstream>
#include <stream>
#include <algorithm>
using namespace std;

/* ================= DATE ================= */
struct Date {
    int d, m, y;

    string toString() {
        stringstream ss;
        ss << d << "/" << m << "/" << y;
        return ss.str();
    }
};

/* ================= PASSENGER ================= */
class Passenger {
public:
    int id;
    string name, phone;
    vector<int> history;

    Passenger() {}

    Passenger(int i, string n, string p) {
        id = i; name = n; phone = p;
    }

    void addHistory(int f) {
        history.push_back(f);
    }

    bool alreadyBooked(int f) {
        for (int i = 0; i < history.size(); i++)
            if (history[i] == f) return true;
        return false;
    }
};

/* ================= FLIGHT ================= */
class Flight {
public:
    int id;
    string no, route;
    Date date;
    double fare;
    int seats, booked;
    double revenue;

    Flight() {}

    Flight(int i, string n, string r, Date d, double f, int s = 50) {
        id = i; no = n; route = r; date = d;
        fare = f; seats = s;
        booked = 0; revenue = 0;
    }

    bool isFull() {
        return booked >= seats;
    }

    bool bookSeat() {
        if (isFull()) return false;
        booked++;
        revenue += fare;
        return true;
    }

    void cancelSeat() {
        if (booked > 0) {
            booked--;
            revenue -= fare;
        }
    }

    double occupancy() {
        return (booked * 100.0) / seats;
    }

    void display() {
        cout << "\nFlight ID: " << id
             << "\nNo: " << no
             << "\nRoute: " << route
             << "\nSeats: " << booked << "/" << seats
             << "\nRevenue: " << revenue
             << "\nOccupancy: " << occupancy() << "%\n";
    }
};

/* ================= TICKET ================= */
class Ticket {
public:
    int id;
    int pid;
    int fid;
    double price;
    string type;

    Ticket(int i, int p, int f, double pr, string t) {
        id = i; pid = p; fid = f;
        price = pr; type = t;
    }

    virtual double refund() {
        return price * 0.5;
    }
};

class Economy : public Ticket {
public:
    Economy(int i,int p,int f,double pr)
        : Ticket(i,p,f,pr,"Economy") {}

    double refund() { return price * 0.5; }
};

class Business : public Ticket {
public:
    Business(int i,int p,int f,double pr)
        : Ticket(i,p,f,pr,"Business") {}

    double refund() { return price * 0.8; }
};

class VIP : public Ticket {
public:
    VIP(int i,int p,int f,double pr)
        : Ticket(i,p,f,pr,"VIP") {}

    double refund() { return price * 0.95; }
};

/* ================= GLOBAL DATA ================= */
vector<Flight> flights;
vector<Passenger> passengers;
vector<Ticket*> tickets;

/* ================= COMPARATOR (NO LAMBDA) ================= */
bool compareRevenue(Flight a, Flight b) {
    return a.revenue > b.revenue;
}

/* ================= HELPERS ================= */
Date today() {
    Date d = {31,5,2026};
    return d;
}

/* ================= FLIGHT OPS ================= */
void addFlight() {
    int id,s;
    string no,route;
    double fare;
    Date d;

    cout<<"ID: ";cin>>id;
    cout<<"No: ";cin>>no;
    cout<<"Route: ";cin>>route;
    cout<<"Day Month Year: ";cin>>d.d>>d.m>>d.y;
    cout<<"Fare: ";cin>>fare;
    cout<<"Seats: ";cin>>s;

    flights.push_back(Flight(id,no,route,d,fare,s));
}

/* ================= SEARCH ================= */
void searchFlight() {
    string key;
    cout<<"Search: ";
    cin>>key;

    for(int i=0;i<flights.size();i++){
        if(flights[i].no==key || flights[i].route==key)
            flights[i].display();
    }
}

/* ================= PASSENGER ================= */
void addPassenger() {
    int id;
    string name,phone;

    cout<<"ID: ";cin>>id;
    cout<<"Name: ";cin>>name;
    cout<<"Phone: ";cin>>phone;

    passengers.push_back(Passenger(id,name,phone));
}

/* ================= BOOKING ================= */
void bookTicket() {
    int fid,pid;

    cout<<"Flight ID: ";cin>>fid;
    cout<<"Passenger ID: ";cin>>pid;

    int fIndex=-1,pIndex=-1;

    for(int i=0;i<flights.size();i++)
        if(flights[i].id==fid) fIndex=i;

    for(int i=0;i<passengers.size();i++)
        if(passengers[i].id==pid) pIndex=i;

    if(fIndex==-1 || pIndex==-1){
        cout<<"Not Found\n";
        return;
    }

    if(passengers[pIndex].alreadyBooked(fid)){
        cout<<"Already Booked!\n";
        return;
    }

    if(!flights[fIndex].bookSeat()){
        cout<<"Flight Full!\n";
        return;
    }

    string type;
    cout<<"Type (Economy/Business/VIP): ";
    cin>>type;

    if(type=="Business")
        tickets.push_back(new Business(tickets.size()+1,pid,fid,flights[fIndex].fare));
    else if(type=="VIP")
        tickets.push_back(new VIP(tickets.size()+1,pid,fid,flights[fIndex].fare));
    else
        tickets.push_back(new Economy(tickets.size()+1,pid,fid,flights[fIndex].fare));

    passengers[pIndex].addHistory(fid);

    cout<<"Booked Successfully!\n";
}

/* ================= CANCEL ================= */
void cancelTicket() {
    int id;
    cout<<"Ticket ID: ";cin>>id;

    for(int i=0;i<tickets.size();i++){
        if(tickets[i]->id==id){

            cout<<"Refund: "<<tickets[i]->refund()<<endl;

            for(int j=0;j<flights.size();j++)
                if(flights[j].id==tickets[i]->fid)
                    flights[j].cancelSeat();

            delete tickets[i];
            tickets.erase(tickets.begin()+i);

            cout<<"Cancelled\n";
            return;
        }
    }

    cout<<"Not Found\n";
}

/* ================= REPORTS ================= */
void reports() {
    cout<<"\n===== REPORTS =====\n";

    for(int i=0;i<flights.size();i++){
        cout<<"Flight "<<flights[i].id
            <<" | Occupancy: "<<flights[i].occupancy()
            <<" | Revenue: "<<flights[i].revenue<<endl;
    }

    vector<Flight> temp = flights;
    sort(temp.begin(), temp.end(), compareRevenue);

    cout<<"\nTop Flights:\n";
    for(int i=0;i<temp.size() && i<5;i++)
        cout<<temp[i].id<<" Revenue: "<<temp[i].revenue<<endl;
}

/* ================= MAIN ================= */
int main() {

    flights.push_back(Flight(101,"PK301","Karachi-Lahore",today(),15000));
    flights.push_back(Flight(102,"PK302","Lahore-Skardu",today(),20000));

    int ch;

    do {
        cout<<"\n===== AIRLINE SYSTEM =====\n";
        cout<<"1 Add Flight\n";
        cout<<"2 Add Passenger\n";
        cout<<"3 Book Ticket\n";
        cout<<"4 Cancel Ticket\n";
        cout<<"5 Search Flight\n";
        cout<<"6 Reports\n";
        cout<<"0 Exit\n";
        cout<<"Choice: ";
        cin>>ch;

        if(ch==1) addFlight();
        else if(ch==2) addPassenger();
        else if(ch==3) bookTicket();
        else if(ch==4) cancelTicket();
        else if(ch==5) searchFlight();
        else if(ch==6) reports();

    } while(ch!=0);

    cout<<"System Closed\n";
}
