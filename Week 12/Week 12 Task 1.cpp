#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

    // Static data member
    static int totalAccounts;

public:
    // Constructor
    BankAccount(string n, double b) {
        name = n;
        balance = b;

        totalAccounts++;
    }

    void display() {
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    static void displayTotalAccounts() {
        cout << "Total Bank Accounts: " 
             << totalAccounts << endl;
    }
};

// initialization
int BankAccount::totalAccounts = 0;

int main() 
{
    BankAccount a1("Samia", 1000);
    BankAccount a2("Sara", 4500);
    BankAccount a3("Ali", 3400);
    BankAccount::displayTotalAccounts();

    return 0;
}
