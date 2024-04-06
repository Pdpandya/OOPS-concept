#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string n, int a) : name(n), age(a) {}

    // Function to read data
    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    // Function to write data
    void writeData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student inheriting from Person
class Student : virtual public Person {
protected:
    float percentage;

public:
    // Constructor to initialize name, age, and percentage
    Student(string n, int a, float p) : Person(n, a), percentage(p) {}

    // Function to read data
    void readData() {
        Person::readData(); // Call base class readData() function
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    // Function to write data
    void writeData() {
        Person::writeData(); // Call base class writeData() function
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Derived class Teacher inheriting from Person
class Teacher : virtual public Person {
protected:
    float salary;

public:
    // Constructor to initialize name, age, and salary
    Teacher(string n, int a, float s) : Person(n, a), salary(s) {}

    // Function to read data
    void readData() {
        Person::readData(); // Call base class readData() function
        cout << "Enter salary: $";
        cin >> salary;
    }

    // Function to write data
    void writeData() {
        Person::writeData(); // Call base class writeData() function
        cout << "Salary: $" << salary << endl;
    }
};

// Derived class TeacherStudent inheriting from both Student and Teacher
class TeacherStudent : public Student, public Teacher {
public:
    // Constructor to initialize all members
    TeacherStudent(string n, int a, float p, float s) : Person(n, a), Student(n, a, p), Teacher(n, a, s) {}

    // Override readData to resolve ambiguity
    void readData() {
        Student::readData(); // Call readData from Student
    }

    // Override writeData to resolve ambiguity
    void writeData() {
        Student::writeData(); // Call writeData from Student
    }
};

int main() {
    // Create object of derived class TeacherStudent
    TeacherStudent person("John", 30, 85.5, 50000);

    // Read data for TeacherStudent object
    cout << "Enter data for Student:" << endl;
    person.readData();

    cout << "\nDisplaying data of Student:" << endl;
    // Write data for TeacherStudent object
    person.writeData();

    return 0;
}

