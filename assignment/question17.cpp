/*
Q17: Reverse Each Row of a Matrix

This program reverses the contents of each row in a matrix using the two-pointer swapping technique. For each row, a start pointer begins at the first element and an end pointer at the last, swapping elements until they meet.

Output:
Enter rows and columns: 2 3
Enter 6 elements: 1 2 3 4 5 6
Reversed rows:
3 2 1
6 5 4
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

    for (int i = 0; i < rows; i++) {
        int start = 0;
        int end = cols - 1;
        while (start < end) {
            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;
            start++;
            end--;
        }
    }

    cout << "Reversed rows:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
