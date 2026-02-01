/*
Q3: Sum of Elements Using a Function

This program demonstrates passing an array to a function. The function accepts an integer array and its size, then returns the sum of all elements. Arrays decay to pointers when passed to functions.

Output:
Enter number of elements: 4
Enter 4 elements: 10 20 30 40
Sum of elements: 100
*/

#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = sumArray(arr, n);
    cout << "Sum of elements: " << result << endl;

    return 0;
}
