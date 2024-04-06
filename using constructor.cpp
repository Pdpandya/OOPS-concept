#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    // Constructor to initialize the numbers
    Calculator(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    // Functions to perform arithmetic operations
    double add() { return num1 + num2; }
    double subtract() { return num1 - num2; }
    double multiply() { return num1 * num2; }

    // Function to perform division, checking for division by zero
    double divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error! Cannot divide by zero." << endl;
            return 0;
        }
    }
};

int main() {
    double num1, num2;

    // Input two numbers from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Create a Calculator object with the given numbers
    Calculator calc(num1, num2);

    // Perform arithmetic operations and display results
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}

