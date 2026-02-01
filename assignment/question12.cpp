/*
Q12: Transpose of a Matrix

This program prints the transpose of a 3x3 matrix by swapping rows and columns. The element at position [i][j] becomes the element at position [j][i] in the transposed matrix.

Output:
Enter 9 elements for 3x3 matrix: 1 2 3 4 5 6 7 8 9
Original matrix:
1 2 3
4 5 6
7 8 9
Transpose:
1 4 7
2 5 8
3 6 9
*/

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter 9 elements for 3x3 matrix: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Original matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
