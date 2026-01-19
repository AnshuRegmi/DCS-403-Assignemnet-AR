#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Largest: " << fmax(num1, num2) << endl;
    cout << "Smallest: " << fmin(num1, num2) << endl;

    return 0;
}
