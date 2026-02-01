/*
Q19: Print Boundary Elements of a Matrix

This program prints only the boundary elements of an NxN matrix. Boundary cells are those where i equals 0 or n-1, or j equals 0 or n-1. The elements are printed in clockwise order starting from top-left.

Output:
Enter size of square matrix: 3
Enter 9 elements: 1 2 3 4 5 6 7 8 9
Boundary elements: 1 2 3 6 9 8 7 4
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int arr[n][n];

    cout << "Enter " << n * n << " elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Boundary elements: ";
    for (int j = 0; j < n; j++) {
        cout << arr[0][j] << " ";
    }
    for (int i = 1; i < n; i++) {
        cout << arr[i][n - 1] << " ";
    }
    for (int j = n - 2; j >= 0; j--) {
        cout << arr[n - 1][j] << " ";
    }
    for (int i = n - 2; i > 0; i--) {
        cout << arr[i][0] << " ";
    }
    cout << endl;

    return 0;
}
