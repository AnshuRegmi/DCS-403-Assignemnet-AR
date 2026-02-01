/*
Q16: Check if a Matrix is Symmetric

This program determines if a 3x3 matrix is symmetric. A matrix is symmetric if A[i][j] equals A[j][i] for all values of i and j. The program compares each element with its corresponding transposed element.

Output:
Enter 9 elements for 3x3 matrix: 1 2 3 2 1 4 3 4 1
Matrix is symmetric
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

    bool isSymmetric = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] != arr[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric) {
        cout << "Matrix is symmetric" << endl;
    } else {
        cout << "Matrix is not symmetric" << endl;
    }

    return 0;
}
