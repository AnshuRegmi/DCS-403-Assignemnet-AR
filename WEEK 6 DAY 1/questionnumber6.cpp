/*
    WEEK 6 DAY 1 - Question 6: Time Complexity Analysis
    
    Time Complexity Breakdown:
    --------------------------
    1. Input operation: O(1) - constant time
    2. Outer loop (i = 0 to n-1): Runs n times
       - Assignment inside: O(1) per outer iteration
       - Inner loop (j = 0 to n-1): Runs n times per outer iteration
         - Comparison inside: O(1) per inner iteration
    3. Arithmetic operation: O(1) - constant time
    4. Output operation: O(1) - constant time
    
    Nested Loop Analysis:
    - Outer loop runs: n times
    - Inner loop runs: n times for EACH outer iteration
    - Total inner loop executions: n × n = n²
    
    Total: O(1) + O(n²) + O(1) + O(1) = O(n²)
    
    FINAL TIME COMPLEXITY: O(n²) - Quadratic Time
    
    Explanation: This is a classic nested loop structure where both
    loops run n times. The total number of operations is n × n = n².
    This is common in algorithms that compare every pair of elements.
*/

#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    // Input - O(1)
    cout << "Processing with n = " << n << endl;
    
    int totalIterations = 0;
    
    // Outer loop: runs n times → O(n)
    for (int i = 0; i < n; i++) {
        int x = i;  // Assignment - O(1)
        
        // Inner loop: runs n times for each outer iteration → O(n) each
        // Total: n × n = O(n²)
        for (int j = 0; j < n; j++) {
            bool check = (i == j);  // Comparison - O(1)
            totalIterations++;
        }
    }
    
    // Arithmetic operation - O(1)
    int result = n * n;
    
    // Output - O(1)
    cout << "Total inner loop iterations: " << totalIterations << endl;
    cout << "Expected: n² = " << result << endl;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    
    someAlgorithm(n);
    
    cout << "\nAlgorithm completed with Time Complexity: O(n²)" << endl;
    
    return 0;
}
