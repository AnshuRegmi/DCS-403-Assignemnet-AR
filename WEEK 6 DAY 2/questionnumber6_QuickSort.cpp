/*
    WEEK 6 DAY 2 - Question 6: Quick Sort
    
    Algorithm Description:
    ----------------------
    Quick Sort is a divide-and-conquer algorithm that picks a 'pivot' element
    and partitions the array around it. Elements smaller than pivot go to the
    left, and elements greater go to the right.
    
    How it works:
    1. Choose a pivot element (this implementation uses last element)
    2. PARTITION: Rearrange array so elements < pivot are on left, > pivot on right
    3. The pivot is now in its final sorted position
    4. Recursively apply to left and right subarrays
    
    Lomuto Partition Scheme (used here):
    - Uses the last element as pivot
    - Maintains an index 'i' for the boundary of smaller elements
    - Scans through and swaps smaller elements to the front
    
    Time Complexity Analysis:
    -------------------------
    - Best/Average: Pivot divides array roughly in half → O(n log n)
    - Worst: Pivot is always smallest/largest → O(n²)
    
    Time Complexity:
    - Best Case:    O(n log n) - Balanced partitions
    - Average Case: O(n log n)
    - Worst Case:   O(n²)      - Already sorted or reverse sorted
    
    Space Complexity: O(log n) average, O(n) worst - for recursion stack
    
    Stability: NOT STABLE - Equal elements may change relative order
    
    Use Case: General purpose sorting, often the fastest in practice,
              used in many standard library implementations
*/

#include <iostream>
using namespace std;

/*
    Partition function (Lomuto partition scheme)
    It takes the last element as pivot, places it at the correct position,
    and places all smaller elements to the left of pivot and all greater
    elements to the right of pivot.

    Returns the index of the pivot after partitioning.
*/
int partition(int arr[], int low, int high) {
    int pivot = arr[high];   // Choose the last element as pivot
    int i = low - 1;         // Index of smaller element

    // Traverse through all elements from low to high-1
    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++;  // Move index of smaller element
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Place the pivot in its correct position
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;  // Return pivot index
}

/*
    Recursive Quick Sort function
    arr[] : array to be sorted
    low   : starting index
    high  : ending index
*/
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get pivot index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);   // Left of pivot
        quickSort(arr, pi + 1, high);  // Right of pivot
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
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "=== Quick Sort ===" << endl;
    cout << "Time Complexity: O(n log n) average, O(n²) worst" << endl;
    cout << "Space Complexity: O(log n) average" << endl << endl;

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
