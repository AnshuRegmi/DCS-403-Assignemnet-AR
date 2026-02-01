/*
Q2: Find the Maximum Element in an Array

This program takes n elements as input and finds the largest value by assuming the first element is the maximum and comparing it with the rest of the elements.

Output:
Enter number of elements: 5
Enter 5 elements: 12 45 7 89 23
Maximum element: 89
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;

    return 0;
}
