/*
    WEEK 6 DAY 1 - Question 1: Time Complexity Analysis
    
    Time Complexity Breakdown:
    --------------------------
    1. Assignment operation: O(1) - constant time
    2. First loop (i = n-2 to 1): Runs (n-2) times → O(n)
    3. Output operation: O(1) - constant time
    4. Second loop (i = 0 to n-1): Runs n times → O(n)
    5. Third loop (i = 0 to 5): Runs 6 times → O(1) - constant time
    
    Total: O(1) + O(n) + O(1) + O(n) + O(1) = O(n)
    
    FINAL TIME COMPLEXITY: O(n) - Linear Time
    
    Explanation: The dominant terms are the two linear loops. 
    The last loop runs a fixed 6 times regardless of n, so it's constant.
    Adding O(n) + O(n) = O(2n) which simplifies to O(n).
*/

#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    // Assignment - O(1)
    int x = 5;
    
    // First loop: runs from n-2 down to 1 → (n-2) iterations → O(n)
    for (int i = n - 2; i >= 1; i--) {
        x = x + 1;  // Arithmetic operation - O(1) per iteration
    }
    
    // Output - O(1)
    cout << "After first loop: " << x << endl;
    
    // Second loop: runs n times → O(n)
    for (int i = 0; i < n; i++) {
        bool check = (i < n);  // Comparison - O(1) per iteration
    }
    
    // Third loop: runs exactly 6 times → O(1) constant
    for (int i = 0; i < 6; i++) {
        int y = i;  // Assignment - O(1) per iteration
    }
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    
    someAlgorithm(n);
    
    cout << "Algorithm completed with Time Complexity: O(n)" << endl;
    
    return 0;
}
