#include <iostream>
using namespace std;

// Function to add two integers
int math(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int math(int a, int b, char operation) {
    if (operation == '-') {
        return a - b;
    } else {
        cout << "Invalid operation!" << endl;
        return 0;
    }
}

// Function to multiply two floating-point numbers
float math(float a, float b) {
    return a * b;
}

// Function to divide two floating-point numbers
float math(float a, float b, char operation) {
    if (operation == '/') {
        return a / b;
    } else {
        cout << "Invalid operation!" << endl;
        return 0.0;
    }
}

int main() {
    // Integer addition
    cout << "Integer addition: " << math(5, 3) << endl;

    // Integer subtraction
    cout << "Integer subtraction: " << math(5, 11, '-') << endl;

    // Float multiplication
    cout << "Float multiplication: " << math(5.5f, 3.0f) << endl;

    // Float division
    cout << "Float division: " << math(5.5f, 7.0f, '/') << endl;

    return 0;
}

