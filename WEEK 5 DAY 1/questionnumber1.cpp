/*
Q1. Print Numbers from 1 to N
This program uses recursion to print numbers from 1 to N. The function first
recursively calls itself with n-1 until reaching the base case (n=0), then
during the unwinding phase, it prints each number in ascending order.
*/

#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0) return;
    printNumbers(n - 1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    printNumbers(n);
    cout << endl;
    return 0;
}
