#include <iostream>
using namespace std;
// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n <= 1) // Base case
        return 1;
    else
        return n * factorial(n - 1); // Recursive case
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        unsigned long long result = factorial(number);
        cout << "Factorial of " << number << " is " << result << endl;
    }

    return 0;
}