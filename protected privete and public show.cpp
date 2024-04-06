#include <iostream>
using namespace std;

// Base class
class A {
private:
    int privateData;
protected:
    int protectedData;
public:
    int publicData;

    // Constructor
    A(int p, int pr, int pu) : privateData(p), protectedData(pr), publicData(pu) {}

    // Display function to show access to members
    void display() {
        cout << "Protected member in Base class: " << protectedData << endl;
        cout << "Public member in Base class: " << publicData << endl;
    }
};

// Derived class
class B : public A {
public:
    // Constructor
    B(int p, int pr, int pu) : A(p, pr, pu) {}

    // Display function to show access to members
    void displayDerived() {
        // Accessing members from the Base class
        cout << "Protected member in Derived class: " << protectedData << endl;
        cout << "Public member in Derived class: " << publicData << endl;
    }
};

int main() {
    // Creating an object of the Derived class
    B obj(1, 2, 3);

    // Accessing members directly
    cout << "Accessing members directly in Base class:" << endl;
    cout << "Public member in Base class: " << obj.publicData << endl;

    cout << "\nAccessing members directly in Derived class:" << endl;
    cout << "Public member in Derived class: " << obj.publicData << endl;

    return 0;
}

