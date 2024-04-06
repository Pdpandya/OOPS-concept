#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor to initialize the date
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Function to validate if the date is valid
    bool isValid() {
        if (year < 0 || month < 1 || month > 12 || day < 1)
            return false;

        int daysInMonth;
        switch (month) {
            case 2:
                daysInMonth = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                daysInMonth = 30;
                break;
            default:
                daysInMonth = 31;
                break;
        }

        return day <= daysInMonth;
    }

    // Getter function to get the day
    int getDay() {
        return day;
    }

    // Getter function to get the month
    int getMonth() {
        return month;
    }

    // Getter function to get the year
    int getYear() {
        return year;
    }
};

int main() {
    int day, month, year;

    // Input date from the user
    cout << "Enter a date (day month year): ";
    cin >> day >> month >> year;

    // Create a Date object with the given date using constructor
    Date date(day, month, year);

    // Validate and display the date
    if (date.isValid()) {
        cout << "Date is valid." << endl;
        cout << "Day: " << date.getDay() << ", Month: " << date.getMonth() << ", Year: " << date.getYear() << endl;
    } else {
        cout << "Date is not valid." << endl;
    }

    return 0;
}

