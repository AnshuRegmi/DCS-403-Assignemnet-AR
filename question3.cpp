//use recursive and solve fibonacci series
#include <iostream>
using namespace std;
unsigned long long fibonacci(int n) {
    if (n <= 1) // Base case
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}
int main() {
    int number;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> number;

    if (number < 0) {
        cout << "Fibonacci series is not defined for negative numbers." << endl;
    } else {
        cout << "Fibonacci series up to " << number << " terms: ";
        for (int i = 0; i < number; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }

    return 0;
}