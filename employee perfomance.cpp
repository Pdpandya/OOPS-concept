#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    string employeeID;
    double salary;

public:
    // Constructor to initialize name, employee ID, and salary
    Employee(string n, string id, double aSalary) {
        name = n;
        employeeID = id;
        salary = aSalary;
    }

    // Function to calculate salary based on performance
    void calculateSalary(double performance) {
        if (performance > 0 && performance <= 1) {
            // Performance is between 0 and 1, increase salary by 10%
            salary *= 1.1;
        } else if (performance > 1 && performance <= 2) {
            // Performance is between 1 and 2, increase salary by 15%
            salary *= 1.15;
        } else if (performance > 2) {
            // Performance is above 2, increase salary by 20%
            salary *= 1.2;
        } else {
            // Invalid performance value
            cout << "Invalid performance value." << endl;
        }
    }

    // Function to display employee details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Create an Employee object with initial values
    Employee emp("amit shah", "BJP123", 50000.0);

    // Display initial employee details
    cout << "Initial Employee Details:" << endl;
    emp.display();

    // Calculate and set salary based on performance
    emp.calculateSalary(1.5);

    // Display updated employee details
    cout << "\nUpdated Employee Details:" << endl;
    emp.display();

    return 0;
}

