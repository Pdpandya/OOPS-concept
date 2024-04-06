#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize the length and width
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Function to calculate the area of the rectangle
    double calculateArea() {
        return length * width;
    }

    // Function to calculate the perimeter of the rectangle
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Create a Rectangle object with the given length and width
    Rectangle rectangle(length, width);

    // Calculate and display the area and perimeter
    cout << "Area of the rectangle: " << rectangle.calculateArea() << endl;
    cout << "Perimeter of the rectangle: " << rectangle.calculatePerimeter() << endl;

    return 0;
}

