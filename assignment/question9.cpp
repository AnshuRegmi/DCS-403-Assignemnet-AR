/*
Q9: Sum of All Elements in a 2x3 Array

This program calculates and prints the sum of all elements in a 2x3 array using a sum variable that accumulates values inside nested loops iterating through rows and columns.

Output:
Enter 6 elements for 2x3 array: 1 2 3 4 5 6
Sum = 21
*/

#include <iostream>
using namespace std;

int main() {
    int arr[2][3];

    cout << "Enter 6 elements for 2x3 array: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
