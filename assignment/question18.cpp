/*
Q18: Reverse Each Column of a Matrix

This program reverses each column of a 2D array by swapping top and bottom elements for each column. It uses top and bottom pointers that move towards each other while swapping elements.

Output:
Enter rows and columns: 3 2
Enter 6 elements: 1 2 3 4 5 6
Reversed columns:
5 6
3 4
1 2
*/

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int arr[10][10];

    cout << "Enter " << rows * cols << " elements: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < cols; j++) {
        int top = 0;
        int bottom = rows - 1;
        while (top < bottom) {
            int temp = arr[top][j];
            arr[top][j] = arr[bottom][j];
            arr[bottom][j] = temp;
            top++;
            bottom--;
        }
    }

    cout << "Reversed columns:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
