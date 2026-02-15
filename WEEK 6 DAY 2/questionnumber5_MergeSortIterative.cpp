/*
    WEEK 6 DAY 2 - Question 5: Merge Sort (Iterative/Bottom-Up)
    
    Algorithm Description:
    ----------------------
    Bottom-Up Merge Sort is an iterative version that avoids recursion.
    Instead of dividing from top to bottom, it starts by treating each
    element as a sorted subarray and merges adjacent subarrays of
    increasing sizes.
    
    How it works:
    1. Start with subarrays of size 1 (each element is a sorted array)
    2. Merge adjacent pairs to get sorted subarrays of size 2
    3. Merge adjacent pairs to get sorted subarrays of size 4
    4. Continue doubling the size until the entire array is sorted
    
    Size progression: 1 → 2 → 4 → 8 → 16 → ... → n
    
    Time Complexity Analysis:
    -------------------------
    - Outer loop runs log₂(n) times (size doubles each time)
    - Each iteration processes all n elements during merging
    - Total: O(log n) × O(n) = O(n log n)
    
    Time Complexity:
    - Best Case:    O(n log n)
    - Average Case: O(n log n)
    - Worst Case:   O(n log n)
    
    Space Complexity: O(n) - Requires extra space for merging
    
    Stability: STABLE - Equal elements maintain their relative order
    
    Use Case: When recursion overhead is a concern, or when stack
              space is limited. Same performance as recursive version.
*/

#include <iostream>
using namespace std;

/*
    Merges two sorted subarrays of arr[]
    First subarray: arr[left ... mid]
    Second subarray: arr[mid+1 ... right]
*/
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;   // Size of left subarray
    int n2 = right - mid;      // Size of right subarray

    // Create temporary arrays
    int* L = new int[n1];
    int* R = new int[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left...right]
    int i = 0;      // Index for L[]
    int j = 0;      // Index for R[]
    int k = left;   // Index for merged array

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Free allocated memory
    delete[] L;
    delete[] R;
}

/*
    Function to perform Bottom-Up (Iterative) Merge Sort
    arr[] : array to be sorted
    n     : number of elements
*/
void mergeSortIterative(int arr[], int n) {
    // currSize: size of subarrays to be merged
    // Starts with 1 (single elements) and doubles each iteration
    for (int currSize = 1; currSize < n; currSize *= 2) {

        // Pick starting point of different subarrays of current size
        for (int leftStart = 0; leftStart < n - 1; leftStart += 2 * currSize) {

            // Find mid point and right end of the subarray
            int mid = min(leftStart + currSize - 1, n - 1);
            int rightEnd = min(leftStart + 2 * currSize - 1, n - 1);

            // Merge subarrays arr[leftStart...mid] and arr[mid+1...rightEnd]
            if (mid < rightEnd) {
                merge(arr, leftStart, mid, rightEnd);
            }
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
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "=== Merge Sort (Iterative/Bottom-Up) ===" << endl;
    cout << "Time Complexity: O(n log n) for all cases" << endl;
    cout << "Space Complexity: O(n)" << endl << endl;

    cout << "Original array: ";
    printArray(arr, n);

    mergeSortIterative(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
