#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Constructor to initialize the member variables
    Car(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
    }

    // Getter function to get the company
    string getCompany() {
        return company;
    }

    // Setter function to set the company
    void setCompany(string c) {
        company = c;
    }

    // Getter function to get the model
    string getModel() {
        return model;
    }

    // Setter function to set the model
    void setModel(string m) {
        model = m;
    }

    // Getter function to get the year
    int getYear() {
        return year;
    }

    // Setter function to set the year
    void setYear(int y) {
        year = y;
    }
};

int main() {
    // Create a Car object with initial values
    Car car("Toyota", "Camry", 2022);

    // Display initial values
    cout << "Company: " << car.getCompany() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;

    // Update values
    car.setCompany("Honda");
    car.setModel("Civic");
    car.setYear(2023);

    // Display updated values
    cout << "\nUpdated Information:" << endl;
    cout << "Company: " << car.getCompany() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;

    return 0;
}

