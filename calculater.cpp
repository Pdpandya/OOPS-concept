#include <iostream>
using namespace std;

class Calculator {
private:
    float num1, num2;

public:
    Calculator(float n1, float n2) {
        num1 = n1;
        num2 = n2;
    }

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float multiply() {
        return num1 * num2;
    }

    float divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error! Cannot divide by zero." << endl;
            return 0;
        }
    }
};

int main() {
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Calculator calc(num1, num2);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}

