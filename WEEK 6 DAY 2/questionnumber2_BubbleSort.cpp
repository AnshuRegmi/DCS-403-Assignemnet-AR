/*
    WEEK 6 DAY 2 - Question 2: Bubble Sort
    
    Algorithm Description:
    ----------------------
    Bubble Sort repeatedly steps through the list, compares adjacent elements,
    and swaps them if they are in the wrong order. The largest elements
    "bubble up" to the end of the array with each pass.
    
    How it works:
    1. Compare adjacent elements and swap if first > second
    2. After each pass, the largest unsorted element is in its final position
    3. Repeat for remaining unsorted portion
    4. Optimization: If no swaps in a pass, array is already sorted
    
    Time Complexity Analysis:
    -------------------------
    - Outer loop runs (n-1) times
    - Inner loop runs (n-i-1) times for each i
    - Total comparisons in worst case = n(n-1)/2
    
    Time Complexity:
    - Best Case:    O(n)   - When array is already sorted (with optimization)
    - Average Case: O(n²)
    - Worst Case:   O(n²)  - When array is reverse sorted
    
    Space Complexity: O(1) - In-place sorting
    
    Stability: STABLE - Equal elements maintain their relative order
    
    Use Case: Simple to understand/implement, good for small datasets
              or nearly sorted arrays
*/

#include <iostream>
using namespace std;

/*
    Function to perform Bubble Sort on an array
    arr[] : the array to be sorted
    n     : number of elements in the array
*/
void bubbleSort(int arr[], int n) {
    // Outer loop runs for each pass
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;  // Optimization: check if any swap happens in this pass

        // Inner loop compares adjacent elements
        // After each pass, the largest element moves to the end
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next one, swap them
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        // If no two elements were swapped in this pass, the array is already sorted
        if (!swapped) {
            cout << "Array sorted early at pass " << (i + 1) << endl;
            break;
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
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "=== Bubble Sort ===" << endl;
    cout << "Time Complexity: O(n²) worst/average, O(n) best" << endl;
    cout << "Space Complexity: O(1)" << endl << endl;

    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
