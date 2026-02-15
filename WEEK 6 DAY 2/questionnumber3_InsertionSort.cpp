/*
    WEEK 6 DAY 2 - Question 3: Insertion Sort
    
    Algorithm Description:
    ----------------------
    Insertion Sort builds the final sorted array one element at a time.
    It works similar to how you sort playing cards in your hand - pick one
    card and insert it into its correct position among the already sorted cards.
    
    How it works:
    1. Start from the second element (first element is considered sorted)
    2. Compare current element with elements in the sorted portion
    3. Shift larger elements to the right to make space
    4. Insert the current element at its correct position
    5. Repeat until all elements are processed
    
    Time Complexity Analysis:
    -------------------------
    - Outer loop runs (n-1) times
    - Inner while loop runs at most i times for each i
    - Total comparisons in worst case = 1 + 2 + ... + (n-1) = n(n-1)/2
    
    Time Complexity:
    - Best Case:    O(n)   - When array is already sorted
    - Average Case: O(n²)
    - Worst Case:   O(n²)  - When array is reverse sorted
    
    Space Complexity: O(1) - In-place sorting
    
    Stability: STABLE - Equal elements maintain their relative order
    
    Use Case: Efficient for small datasets, nearly sorted arrays,
              or when elements arrive one at a time (online algorithm)
*/

#include <iostream>
using namespace std;

/*
    Function to perform Insertion Sort on an array
    arr[] : the array to be sorted
    n     : number of elements in the array
*/
void insertionSort(int arr[], int n) {
    // Start from the second element (index 1)
    // The first element is considered already sorted
    for (int i = 1; i < n; i++) {
        int key = arr[i];   // The element to be inserted in the sorted part
        int j = i - 1;

        // Move elements of the sorted part that are greater than key
        // one position ahead to make space for key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the key at its correct position
        arr[j + 1] = key;
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
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "=== Insertion Sort ===" << endl;
    cout << "Time Complexity: O(n²) worst/average, O(n) best" << endl;
    cout << "Space Complexity: O(1)" << endl << endl;

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
