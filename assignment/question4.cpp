/*
Q4: Linear Search

This program implements linear search which checks each element one by one sequentially until the target is found. It works on both sorted and unsorted arrays with O(n) time complexity.

Output:
Enter number of elements: 5
Enter 5 elements: 10 25 30 45 50
Enter element to search: 30
Element found at index 2
*/

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
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

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int result = linearSearch(arr, n, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
