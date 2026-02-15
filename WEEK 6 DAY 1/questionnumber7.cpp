/*
    WEEK 6 DAY 1 - Question 7: Time Complexity Analysis
    
    Time Complexity Breakdown:
    --------------------------
    1. Input operation: O(1) - constant time
    2. Outer loop (i = 0 to n-1): Intended to run n times
       - Inner logarithmic loop (i = n down to 1, dividing by 2): O(log n)
       - Inner linear loop (j = 0 to n-1): O(n)
    3. Arithmetic operation: O(1) - constant time
    4. Output operation: O(1) - constant time
    
    IMPORTANT NOTE: The original code has a bug - the inner log loop
    reuses variable 'i', which affects the outer loop. For analysis,
    we consider the intended structure.
    
    Intended Analysis (if variables were different):
    - Outer loop: n times
    - For each outer iteration:
      - Log loop: O(log n)
      - Linear loop: O(n)
    - Total per outer iteration: O(log n + n) = O(n)
    - Total: n × O(n) = O(n²)
    
    With the bug (same variable i):
    - The outer loop behavior is affected by inner loop modifying i
    - Still results in approximately O(n²) due to combined iterations
    
    Total: O(n²) (dominant term)
    
    FINAL TIME COMPLEXITY: O(n²) - Quadratic Time
    
    Explanation: The nested structure with outer loop running n times
    and inner linear loop running n times dominates, giving O(n²).
    The log n term is absorbed into the higher order term.
*/

#include <iostream>
#include <cmath>
using namespace std;

// Corrected version with proper variable names
void someAlgorithm(int n) {
    // Input - O(1)
    cout << "Processing with n = " << n << endl;
    
    int logIterations = 0;
    int linearIterations = 0;
    
    // Outer loop: runs n times
    for (int i = 0; i < n; i++) {
        
        // Inner logarithmic loop: runs log₂(n) times → O(log n)
        // Using different variable 'k' to avoid conflict
        for (int k = n; k >= 1; k /= 2) {
            int x = k + 1;  // Arithmetic operation
            logIterations++;
        }
        
        // Inner linear loop: runs n times → O(n)
        for (int j = 0; j < n; j++) {
            bool check = (j < n);  // Comparison
            linearIterations++;
        }
    }
    
    // Arithmetic operation - O(1)
    int result = n * n;
    
    // Output - O(1)
    cout << "Logarithmic loop total iterations: " << logIterations << endl;
    cout << "Expected log iterations: n × log₂(n) ≈ " << n * ((int)log2(n) + 1) << endl;
    cout << "Linear loop total iterations: " << linearIterations << endl;
    cout << "Expected linear iterations: n² = " << result << endl;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    
    someAlgorithm(n);
    
    cout << "\nAlgorithm completed with Time Complexity: O(n²)" << endl;
    cout << "(n × log n term is dominated by n × n term)" << endl;
    
    return 0;
}
