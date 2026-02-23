#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    string accountType;
    double balance;

public:
    void createAccount(string n, int accNum, string accType, double bal) {
        name = n;
        accountNumber = accNum;
        accountType = accType;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient balance!\n";
        else
            balance -= amount;
    }

    void display() {
        cout << "Name: " << name << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.createAccount("Charles Ogeta", 12345, "Savings", 5000.0);
    acc.deposit(2000.0);
    acc.withdraw(1000.0);
    acc.display();
    return 0;
}

