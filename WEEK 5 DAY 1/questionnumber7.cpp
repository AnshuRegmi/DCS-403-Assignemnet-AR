/*
Q7. Tail-Recursive Fibonacci
This program computes Fibonacci using tail recursion for better efficiency.
It carries two parameters: the current and next Fibonacci numbers. Each call
shifts these values forward until n reaches 0, avoiding redundant calculations.
*/

#include <iostream>
using namespace std;

int fibonacciTail(int n, int current, int next) {
    if (n == 0) return current;
    return fibonacciTail(n - 1, next, current + next);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacciTail(n, 0, 1) << endl;
    return 0;
}
