#include<iostream>
using namespace std;

template<class T>
void swapValues(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4, y = 7;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    float p = 45.3, q = 4.8;
    cout << "Before swapping: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swapping: p = " << p << ", q = " << q << endl;

    return 0;
}

