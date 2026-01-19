#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num, base, exponent;

    cout << "Enter a number for square root and absolute value: ";
    cin >> num;
    cout << "Square root: " << sqrt(abs(num)) << endl;
    cout << "Absolute value: " << abs(num) << endl;

    cout << "Enter base and exponent for power: ";
    cin >> base >> exponent;
    cout << base << " raised to power " << exponent << " is " << pow(base, exponent) << endl;

    return 0;
}
