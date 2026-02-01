/*
Q8: Input and Display a 3x3 Matrix

This program declares a 3x3 integer array, takes input from the user, and displays it in matrix form using two nested loops where the outer loop handles rows and the inner loop handles columns.

Output:
Enter 9 elements for 3x3 matrix: 1 2 3 4 5 6 7 8 9
Matrix:
1 2 3
4 5 6
7 8 9
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

    cout << "Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
