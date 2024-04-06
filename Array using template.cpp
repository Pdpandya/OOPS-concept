#include<iostream>
#include<algorithm> // for std::sort
using namespace std;

template<class T>
void swapValues(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
void sortArray(T arr[], int size)
{
    sort(arr, arr + size);
}

template<class T>
void printArray(T arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int intArr[] = {5, 2, 8, 1, 6};
    int intSize = sizeof(intArr) / sizeof(int);
    cout << "Before sorting (integers): ";
    printArray(intArr, intSize);
    sortArray(intArr, intSize);
    cout << "After sorting (integers): ";
    printArray(intArr, intSize);

    double doubleArr[] = {5.3, 2.1, 8.6, 1.4, 6.9};
    int doubleSize = sizeof(doubleArr) / sizeof(double);
    cout << "Before sorting (doubles): ";
    printArray(doubleArr, doubleSize);
    sortArray(doubleArr, doubleSize);
    cout << "After sorting (doubles): ";
    printArray(doubleArr, doubleSize);

    return 0;
}

