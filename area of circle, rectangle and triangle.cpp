#include <iostream>
using namespace std;

const float PI = 3.14159;

// Function to calculate the area of a circle
float area(float a) {
    return PI * a * a;
}

// Function to calculate the area of a rectangle
float area(float a, float b) {
    return a * b;
}

// Function to calculate the area of a triangle
float area(float a, float b, char c) {
    return 0.5 * a * b;
}

int main() {
    float radius, length, breadth, base, height;

    // Calculate area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    // Calculate area of a rectangle
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << area(length, breadth) << endl;

    // Calculate area of a triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height, 't') << endl;

    return 0;
}

