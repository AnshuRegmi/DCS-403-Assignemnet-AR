/*
    WEEK 6 DAY 1 - Question 9: Time Complexity Analysis
    
    Time Complexity Breakdown:
    --------------------------
    1. Assignment operation: O(1) - constant time
    
    2. Triangular nested loop:
       - Outer loop (i = 0 to n-1): runs n times
       - Inner loop (j = 0 to i): runs (i+1) times for each i
       
       Inner loop iterations per outer iteration:
       - When i = 0: j runs 1 time   (j = 0)
       - When i = 1: j runs 2 times  (j = 0, 1)
       - When i = 2: j runs 3 times  (j = 0, 1, 2)
       - ...
       - When i = n-1: j runs n times (j = 0, 1, ..., n-1)
       
       Total iterations = 1 + 2 + 3 + ... + n
                        = n(n+1)/2
                        = (n² + n)/2
                        = O(n²)
    
    3. Output operation: O(1) - constant time
    
    Total: O(1) + O(n²) + O(1) = O(n²)
    
    FINAL TIME COMPLEXITY: O(n²) - Quadratic Time
    
    Explanation: This is a triangular nested loop pattern. The inner
    loop's iterations depend on the outer loop variable, creating a
    triangular pattern. The sum 1+2+3+...+n equals n(n+1)/2, which
    is O(n²). This pattern is common in algorithms like Insertion Sort.
    
    Visual representation (for n=5):
    i=0: *           (1 iteration)
    i=1: * *         (2 iterations)
    i=2: * * *       (3 iterations)
    i=3: * * * *     (4 iterations)
    i=4: * * * * *   (5 iterations)
    Total: 1+2+3+4+5 = 15 = 5(6)/2 = n(n+1)/2
*/

#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    // Assignment - O(1)
    int x = 0;
    
    int totalIterations = 0;
    
    cout << "Triangular Loop Pattern:" << endl;
    
    // Triangular nested loop: 1 + 2 + 3 + ... + n = n(n+1)/2 → O(n²)
    for (int i = 0; i < n; i++) {
        cout << "i=" << i << ": ";
        
        // Inner loop runs from 0 to i (inclusive)
        // So it runs (i+1) times for each value of i
        for (int j = 0; j <= i; j++) {
            x = x + 1;  // Arithmetic operation - O(1)
            totalIterations++;
            cout << "* ";
        }
        cout << " (" << (i + 1) << " iterations)" << endl;
    }
    
    // Calculate expected iterations using formula
    int expected = n * (n + 1) / 2;
    
    // Output - O(1)
    cout << "\nTotal iterations: " << totalIterations << endl;
    cout << "Using formula n(n+1)/2: " << n << "×" << (n + 1) << "/2 = " << expected << endl;
    cout << "This equals: " << n << "² + " << n << " divided by 2 = O(n²)" << endl;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    
    someAlgorithm(n);
    
    cout << "\nAlgorithm completed with Time Complexity: O(n²)" << endl;
    cout << "Sum formula: 1+2+3+...+n = n(n+1)/2 ≈ n²/2 = O(n²)" << endl;
    
    return 0;
}
