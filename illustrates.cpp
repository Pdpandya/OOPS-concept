#include <iostream>
using namespace std;

// Base class
class A {
protected:
    int var;

public:
    // Constructor
    A(int v) : var(v) {
        cout << "A constructor called with value: " << var << endl;
    }
};

// Intermediate derived class inheriting from A
class B : public A {
protected:
    int bVar;

public:
    // Constructor
    B(int v1, int v2) : A(v1), bVar(v2) {
        cout << "B constructor called with value: " << bVar << endl;
    }
};

// Derived class inheriting from B
class C : public B {
public:
    // Constructor
    C(int v1, int v2, int v3) : B(v1, v2) {
        cout << "C constructor called with value: " << v3 << endl;
    }
};

int main() {
    // Creating an object of C class
    C obj(10, 20, 30);

    return 0;
}

