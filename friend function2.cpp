#include <iostream>
using namespace std;

class Numbers {
public:
    int num1, num2;

public:
    Numbers(int n1, int n2) : num1(n1), num2(n2) {}

    friend int maxNumber(Numbers&);
};

int maxNumber(Numbers& nums) {
    return (nums.num1 > nums.num2) ? nums.num1 : nums.num2;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Numbers nums(x, y);

    cout << "Maximum number: " << maxNumber(nums) << endl;

    return 0;
}

