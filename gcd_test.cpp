#include <iostream>
using namespace std;

// Recursive function
int gcd(int m, int n) {
    if (m % n == 0)
        return n;
    else
        return gcd(n, m % n);
}

int main() {
    // Test cases
    cout << "GCD of 24 and 16 is " << gcd(24, 16) << endl;
    cout << "GCD of 255 and 25 is " << gcd(255, 25) << endl;
}
