/*
    WEEK 6 DAY 1 - Question 8: Time Complexity Analysis
    
    Time Complexity Breakdown:
    --------------------------
    1. Input operation: O(1) - constant time
    
    2. Triple nested loop:
       - Outer loop (i = 0 to n-1): n times
       - Middle loop (j = 0 to n-1): n times
       - Inner loop (k = 0 to n-1): n times
       - Total: n × n × n = n³ → O(n³)
    
    3. Arithmetic operation: O(1) - constant time
    
    4. Second nested loop:
       - Outer loop (i = 0 to n-1): n times
       - Inner loop (j = 10 to 1): 10 times (CONSTANT!)
       - Total: n × 10 = 10n → O(n)
    
    Combined Analysis:
    - Triple nested loop: O(n³)
    - Double nested loop with constant inner: O(n)
    - Total: O(n³) + O(n) = O(n³)
    
    FINAL TIME COMPLEXITY: O(n³) - Cubic Time
    
    Explanation: The dominant term is the triple nested loop which runs
    n³ times. The second nested loop only contributes O(n) because the
    inner loop runs a constant 10 times regardless of n. In Big-O,
    O(n³) + O(n) = O(n³) since the cubic term dominates.
*/

#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    // Input - O(1)
    cout << "Processing with n = " << n << endl;
    
    long long tripleLoopCount = 0;
    int secondLoopCount = 0;
    
    // Triple nested loop: n × n × n = n³ → O(n³)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                bool check = (i + j + k < n);  // Comparison - O(1)
                tripleLoopCount++;
            }
        }
    }
    
    // Arithmetic operation - O(1)
    long long expected = (long long)n * n * n;
    
    // Second nested loop: n × 10 = 10n → O(n)
    // The inner loop runs CONSTANT 10 times (j from 10 to 1)
    for (int i = 0; i < n; i++) {
        for (int j = 10; j >= 1; j--) {
            int x = j;  // Assignment - O(1)
            secondLoopCount++;
        }
    }
    
    // Output
    cout << "\nTriple nested loop iterations: " << tripleLoopCount << endl;
    cout << "Expected (n³): " << expected << endl;
    cout << "\nSecond nested loop iterations: " << secondLoopCount << endl;
    cout << "Expected (n × 10): " << n * 10 << endl;
    cout << "\nNote: Inner loop j runs fixed 10 times (constant), not dependent on n" << endl;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    
    someAlgorithm(n);
    
    cout << "\nAlgorithm completed with Time Complexity: O(n³)" << endl;
    cout << "O(n³) + O(n) = O(n³) since cubic term dominates" << endl;
    
    return 0;
}
