#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor to initialize the radius
    Circle(double r) {
        radius = r;
    }

    // Function to calculate the area of the circle
    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    // Function to calculate the circumference of the circle
    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Create a Circle object with the given radius
    Circle circle(radius);

    // Calculate and display the area and circumference
    cout << "Area of the circle: " << circle.calculateArea() << endl;
    cout << "Circumference of the circle: " << circle.calculateCircumference() << endl;

    return 0;
}

