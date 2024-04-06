#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize the account details
    BankAccount(string name, string accNum, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of " << amount << " successful." << endl;
    }

    // Function to withdraw money from the account after checking balance
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful." << endl;
        } else {
            cout << "Insufficient funds. Withdrawal unsuccessful." << endl;
        }
    }

    // Function to display name and balance
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: " << balance << endl;
    }

    // Function to assign values
    void assignValues(string name, string accNum, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount account("", "", "", 0.0);

    // Assigning initial values
    account.assignValues("Vijay Mallya", "123456789", "Savings", 1000.0);

    // Displaying initial name and balance
    cout << "Initial Account Details:" << endl;
    account.display();

    // Performing transactions
    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(2000.0); // Attempting to withdraw more than balance

    // Displaying updated name and balance
    cout << "\nUpdated Account Details:" << endl;
    account.display();

    return 0;
}

