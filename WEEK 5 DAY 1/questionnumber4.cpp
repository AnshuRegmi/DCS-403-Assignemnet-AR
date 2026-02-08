/*
Q4. Print Array Elements Using Recursion
This program prints all elements of an array recursively. It uses an index
parameter that starts at 0 and increments with each call. The base case
stops when the index equals the array size.
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index) {
    if (index == size) return;
    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printArray(arr, n, 0);
    cout << endl;
    return 0;
}
