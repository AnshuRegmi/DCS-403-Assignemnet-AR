/*
Q5. Tail-Recursive Power Function
This program computes a^b using tail recursion. Unlike regular recursion,
the result is accumulated in a parameter passed through each call. When b
reaches 0, the accumulated result is returned directly without any pending operations.
*/

#include <iostream>
using namespace std;

long long power(int a, int b, long long result) {
    if (b == 0) return result;
    return power(a, b - 1, result * a);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << power(a, b, 1) << endl;
    return 0;
}
