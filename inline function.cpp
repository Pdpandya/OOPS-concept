#include <iostream>
using namespace std;

// Inline function to calculate multiplication of two numbers
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function to calculate cubic value of a number
inline int cubic(int a) {
    return a * a * a;
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate and display multiplication value using inline function
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;

    // Input a number from the user
    cout << "Enter a number to find its cubic value: ";
    cin >> num1;

    // Calculate and display cubic value using inline function
    cout << "Cubic value of " << num1 << " is: " << cubic(num1) << endl;

    return 0;
}

