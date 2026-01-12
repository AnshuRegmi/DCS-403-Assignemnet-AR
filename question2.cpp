#include <iostream>
using namespace std;

int main() {
    double celsius;
    const double MULTIPLIER = 9.0;
    const double DIVISOR = 5.0;
    const double OFFSET = 32.0;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * MULTIPLIER / DIVISOR) + OFFSET;

    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
}
