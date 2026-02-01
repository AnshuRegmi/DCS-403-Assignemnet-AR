/*
Q15: Passing a 2D Array to a Function

This program demonstrates passing a 2D array to a function. The function printMatrix accepts a 3x3 array with fixed column size in the parameter declaration as void printMatrix(int arr[][3]).

Output:
Enter 9 elements for 3x3 matrix: 1 2 3 4 5 6 7 8 9
Matrix:
1 2 3
4 5 6
7 8 9
*/

#include <iostream>
using namespace std;

void printMatrix(int arr[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3];

    cout << "Enter 9 elements for 3x3 matrix: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix:" << endl;
    printMatrix(arr);

    return 0;
}
