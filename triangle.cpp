#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // Constructor to initialize the side lengths
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Function to determine if the triangle is equilateral
    bool isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }

    // Function to determine if the triangle is isosceles
    bool isIsosceles() {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }

    // Function to determine if the triangle is scalene
    bool isScalene() {
        return (!isEquilateral() && !isIsosceles());
    }
};

int main() {
    double side1, side2, side3;

    // Input side lengths from the user
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // Create a Triangle object with the given side lengths
    Triangle triangle(side1, side2, side3);

    // Determine and display the type of triangle
    if (triangle.isEquilateral())
        cout << "The triangle is equilateral." << endl;
    else if (triangle.isIsosceles())
        cout << "The triangle is isosceles." << endl;
    else if (triangle.isScalene())
        cout << "The triangle is scalene." << endl;
    else
        cout << "Invalid triangle." << endl;

    return 0;
}

