/*
Q2. Factorial of a Number
This program calculates the factorial of a number using recursion. It uses the
mathematical relation n! = n * (n-1)!. The base case returns 1 when n is 0 or 1,
and each recursive call multiplies n with the factorial of (n-1).
*/

#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
