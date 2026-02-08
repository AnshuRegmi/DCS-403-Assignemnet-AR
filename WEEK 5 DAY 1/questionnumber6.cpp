/*
Q6. Fibonacci Number (Recursive)
This program computes the nth Fibonacci number using the classic recursive
approach. It uses the relation Fib(n) = Fib(n-1) + Fib(n-2), with base cases
returning n when n is 0 or 1.
*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
