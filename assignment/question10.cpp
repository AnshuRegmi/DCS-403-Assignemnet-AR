/*
Q10: Print Row-wise and Column-wise Sums

This program calculates the sum of each row and each column of a 3x3 matrix. For row sums, it fixes the row index and loops over columns. For column sums, it fixes the column index and loops over rows.

Output:
Enter 9 elements for 3x3 matrix: 1 2 3 4 5 6 7 8 9
Row sums: 6, 15, 24
Column sums: 12, 15, 18
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

    cout << "Row sums: ";
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += arr[i][j];
        }
        cout << rowSum;
        if (i < 2) cout << ", ";
    }
    cout << endl;

    cout << "Column sums: ";
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += arr[i][j];
        }
        cout << colSum;
        if (j < 2) cout << ", ";
    }
    cout << endl;

    return 0;
}
