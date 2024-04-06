#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Setter function to set the name
    void setName(string n) {
        name = n;
    }

    // Getter function to get the name
    string getName() {
        return name;
    }

    // Setter function to set the age
    void setAge(int a) {
        age = a;
    }

    // Getter function to get the age
    int getAge() {
        return age;
    }

    // Setter function to set the country
    void setCountry(string c) {
        country = c;
    }

    // Getter function to get the country
    string getCountry() {
        return country;
    }
};

int main() {
    // Create a Person object
    Person person;

    // Set values using setter functions
    person.setName("parth pandya");
    person.setAge(28);
    person.setCountry("India");

    // Display values using getter functions
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;
}

