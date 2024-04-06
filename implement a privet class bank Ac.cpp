#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor to initialize account number and balance
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of " << amount << " successful." << endl;
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful." << endl;
        } else {
            cout << "Insufficient funds. Withdrawal unsuccessful." << endl;
        }
    }

    // Function to display account details
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Create a BankAccount object with initial values
    BankAccount account("123456789", 10000.0);

    // Display initial account details
    cout << "Initial Account Details:" << endl;
    account.display();

    // Perform transactions
    account.deposit(5000.0);
    account.withdraw(2000.0);
    account.withdraw(2000.0); // Attempting to withdraw more than balance

    // Display updated account details
    cout << "\nUpdated Account Details:" << endl;
    account.display();

    return 0;
}

