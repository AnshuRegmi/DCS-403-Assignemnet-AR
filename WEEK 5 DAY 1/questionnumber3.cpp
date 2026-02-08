/*
Q3. Sum of Digits
This program calculates the sum of all digits in a number using recursion.
It extracts the last digit using modulus (n%10), adds it to the recursive
sum of the remaining digits (n/10), until the number becomes 0.
*/

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n;
    cin >> n;
    cout << sumOfDigits(n) << endl;
    return 0;
}
