/*
    WEEK 6 DAY 2 - Question 1: Selection Sort
    
    Algorithm Description:
    ----------------------
    Selection Sort works by repeatedly finding the minimum element from the
    unsorted portion of the array and placing it at the beginning.
    
    How it works:
    1. Find the minimum element in the unsorted part of the array
    2. Swap it with the first element of the unsorted part
    3. Move the boundary between sorted and unsorted parts one element forward
    4. Repeat until the entire array is sorted
    
    Time Complexity Analysis:
    -------------------------
    - Outer loop runs (n-1) times
    - Inner loop runs (n-i-1) times for each i
    - Total comparisons = (n-1) + (n-2) + ... + 1 = n(n-1)/2
    
    Time Complexity:
    - Best Case:    O(n²)  - Even if sorted, still checks all elements
    - Average Case: O(n²)
    - Worst Case:   O(n²)
    
    Space Complexity: O(1) - In-place sorting, only uses constant extra space
    
    Stability: NOT STABLE - Equal elements may change relative order
    
    Use Case: Good for small arrays or when memory writes are expensive
              (makes minimum number of swaps: O(n))
*/

#include <iostream>
using namespace std;

/*
    Function to perform Selection Sort on an array
    arr[] : the array to be sorted
    n     : number of elements in the array
*/
void selectionSort(int arr[], int n) {
    // Traverse through all elements of the array
    for (int i = 0; i < n - 1; i++) {
        // Assume the current index has the minimum element
        int minIndex = i;

        // Find the index of the minimum element in the remaining unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update minIndex if a smaller element is found
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "=== Selection Sort ===" << endl;
    cout << "Time Complexity: O(n²)" << endl;
    cout << "Space Complexity: O(1)" << endl << endl;

    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
