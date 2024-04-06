#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    int zipCode;

public:
    // Constructor to initialize address
    Address(string str, string c, string s, int zip) {
        street = str;
        city = c;
        state = s;
        zipCode = zip;
    }

    // Function to display address details
    void display() {
        cout << "Address: " << street << ", " << city << ", " << state << " - " << zipCode << endl;
    }
};

class Student {
private:
    string name;
    string className;
    int rollNumber;
    int marks;
    Address address;

public:
    // Constructor to initialize student details
    Student(string n, string cls, int roll, int m, Address addr) : address(addr) {
        name = n;
        className = cls;
        rollNumber = roll;
        marks = m;
    }

    // Function to calculate grade based on marks
    char calculateGrade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

    // Function to display student information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.display();
    }
};

int main() {
    // Create an Address object for each student
    Address address1("maninagar", "ahemdabad", "Gujarat",345355);
    Address address2("kolaba", "south mumbai", "Maharashtra", 545321);

    // Create Student objects with details and address
    Student student1("Hariprasad chaursiya", "12th Grade", 101, 85, address1);
    Student student2("Donald Trump", "11th Grade", 102, 95, address2);

    // Display student information
    cout << "Student 1 Information:" << endl;
    student1.display();
    cout << endl;
    cout << "Student 2 Information:" << endl;
    student2.display();

    return 0;
}

