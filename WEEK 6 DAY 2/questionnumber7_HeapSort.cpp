/*
    WEEK 6 DAY 2 - Question 7: Heap Sort
    
    Algorithm Description:
    ----------------------
    Heap Sort uses a binary heap data structure to sort elements.
    It first builds a Max Heap from the array, then repeatedly extracts
    the maximum element (root) and places it at the end of the array.
    
    Binary Heap Properties:
    - Complete binary tree stored as array
    - For index i: Left child at 2i+1, Right child at 2i+2, Parent at (i-1)/2
    - Max Heap: Parent >= Children
    
    How it works:
    1. BUILD MAX HEAP: Convert array into a max heap
       - Start from last non-leaf node (n/2 - 1) and heapify each node
    2. SORT: Repeatedly extract maximum
       - Swap root (max) with last element
       - Reduce heap size by 1
       - Heapify the root to maintain max heap property
       - Repeat until heap size is 1
    
    Heapify Operation:
    - Compare node with its children
    - If child is larger, swap and recursively heapify the affected subtree
    
    Time Complexity Analysis:
    -------------------------
    - Building heap: O(n) - tighter analysis shows linear time
    - Extraction phase: n-1 extractions, each O(log n) heapify
    - Total: O(n) + O(n log n) = O(n log n)
    
    Time Complexity:
    - Best Case:    O(n log n)
    - Average Case: O(n log n)
    - Worst Case:   O(n log n)
    
    Space Complexity: O(1) - In-place sorting (iterative heapify: O(1))
    
    Stability: NOT STABLE - Equal elements may change relative order
    
    Use Case: When guaranteed O(n log n) is needed with O(1) space,
              priority queue operations, k largest/smallest elements
*/

#include <iostream>
using namespace std;

/*
    Heapify a subtree rooted at index i
    n   : size of the heap
    i   : index of the root of the subtree
    This function ensures the subtree follows the Max Heap property:
    parent >= left child and parent >= right child
*/
void heapify(int arr[], int n, int i) {
    int largest = i;        // Assume root is the largest
    int left = 2 * i + 1;   // Left child index
    int right = 2 * i + 2;  // Right child index

    // If left child exists and is greater than root
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // If right child exists and is greater than the largest so far
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // If largest is not root, swap and continue heapifying
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}

/*
    Function to perform Heap Sort
    arr[] : array to be sorted
    n     : number of elements in the array
*/
void heapSort(int arr[], int n) {
    // Step 1: Build a Max Heap from the array
    // Start from the last non-leaf node and heapify each node
    // Last non-leaf node is at index (n/2 - 1)
    cout << "Building Max Heap..." << endl;
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // Step 2: Extract elements one by one from the heap
    cout << "Extracting elements..." << endl;
    for (int i = n - 1; i > 0; i--) {
        // Move current root (largest) to the end
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
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
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "=== Heap Sort ===" << endl;
    cout << "Time Complexity: O(n log n) for all cases" << endl;
    cout << "Space Complexity: O(1)" << endl << endl;

    cout << "Original array: ";
    printArray(arr, n);

    heapSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
