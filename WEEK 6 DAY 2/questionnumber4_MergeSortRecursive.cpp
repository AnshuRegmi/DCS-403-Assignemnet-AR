/*
    WEEK 6 DAY 2 - Question 4: Merge Sort (Recursive)
    
    Algorithm Description:
    ----------------------
    Merge Sort is a divide-and-conquer algorithm that divides the array into
    two halves, recursively sorts them, and then merges the sorted halves.
    
    How it works:
    1. DIVIDE: Split the array into two halves
    2. CONQUER: Recursively sort both halves
    3. COMBINE: Merge the two sorted halves into one sorted array
    
    The merge operation:
    - Create temporary arrays for left and right halves
    - Compare elements from both arrays
    - Place the smaller element into the result array
    - Copy remaining elements
    
    Time Complexity Analysis:
    -------------------------
    - Dividing takes O(1) time
    - We divide log₂(n) times (tree height)
    - Merging at each level takes O(n) total
    - Total: O(n) × O(log n) = O(n log n)
    
    Time Complexity:
    - Best Case:    O(n log n)
    - Average Case: O(n log n)
    - Worst Case:   O(n log n)
    
    Space Complexity: O(n) - Requires extra space for temporary arrays
    
    Stability: STABLE - Equal elements maintain their relative order
    
    Use Case: Large datasets, linked lists, external sorting,
              when stable sort is needed with guaranteed O(n log n)
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

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left...right]
    int i = 0;      // Initial index of left subarray
    int j = 0;      // Initial index of right subarray
    int k = left;   // Initial index of merged subarray

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

    // Copy any remaining elements of L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements of R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Free the dynamically allocated memory
    delete[] L;
    delete[] R;
}

/*
    Recursive function to perform Merge Sort
    arr[] : array to be sorted
    left  : starting index
    right : ending index
*/
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Find the middle point
        int mid = left + (right - left) / 2;

        // Recursively sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
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

    cout << "=== Merge Sort (Recursive) ===" << endl;
    cout << "Time Complexity: O(n log n) for all cases" << endl;
    cout << "Space Complexity: O(n)" << endl << endl;

    cout << "Original array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
