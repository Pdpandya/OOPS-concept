#include<iostream>
#include<string>

using namespace std;

class Matrix {
private:
    int size;
    int *data;

public:
    // Constructor
    Matrix(int s) : size(s) {
        data = new int[size];
    }

    // Destructor
    ~Matrix() {
        delete[] data;
    }

    // Overloading + operator for matrix addition
    Matrix operator +(const Matrix& other) {
        if (size != other.size) {
            cerr << "Matrix sizes are not equal. Addition cannot be performed." << endl;
            exit(1);
        }

        Matrix result(size);
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    // Function to display matrix elements
    void display() {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Matrix a(5); // Matrix a with size 5
    a.display(); // Display matrix a

    Matrix b(5); // Matrix b with size 5
    b.display(); // Display matrix b

    Matrix c = a + b; // Perform matrix addition
    cout << "Result of matrix addition: ";
    c.display(); // Display result

    return 0;
}

