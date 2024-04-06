#include<iostream>
#include<string>

using namespace std;

class mystring {
private:
    string str;

public:
    // Constructor
    mystring(string s) : str(s) {}

    // Overloading + operator for string concatenation
    mystring operator +(const mystring& other) {
        return mystring(str + other.str);
    }

    // Function to display the string
    void display() {
        cout << str << endl;
    }
};

int main() {
    mystring str1("hello, ");
    mystring str2("world!");

    // Concatenating two strings using overloaded +
    mystring result = str1 + str2;

    // Displaying the concatenated string
    cout << "concatenated string: ";
    result.display();

    return 0;
}

