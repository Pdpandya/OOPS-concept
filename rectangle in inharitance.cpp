#include<iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual double area() = 0; // Virtual function to calculate area
};

// Derived class Rectangle inheriting from Shape
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Overridden function to calculate area of rectangle
    double area() {
        return length * width;
    }
};

int main() {
    double length, width;

    // Input length and width of rectangle
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    // Create Rectangle object
    Rectangle rect(length, width);

    // Calculate and display area
    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}

