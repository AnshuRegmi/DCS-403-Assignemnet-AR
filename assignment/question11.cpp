/*
Q11: Find Largest Element in Each Row

This program finds and prints the largest element of each row in a 3x3 matrix. It assumes the first element in each row is the maximum and compares it with the remaining elements in that row.

Output:
Enter 9 elements for 3x3 matrix: 3 9 1 4 2 7 8 6 5
Row max values: 9, 7, 8
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

    cout << "Row max values: ";
    for (int i = 0; i < 3; i++) {
        int maxVal = arr[i][0];
        for (int j = 1; j < 3; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
        cout << maxVal;
        if (i < 2) cout << ", ";
    }
    cout << endl;

    return 0;
}
