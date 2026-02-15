/*
    WEEK 6 DAY 1 - Question 3: Time Complexity Analysis
    
    Time Complexity Breakdown:
    --------------------------
    1. Input operation: O(1) - constant time
    2. Loop (i = 1 to n, incrementing by 5): Runs n/5 times → O(n)
    3. Output operation: O(1) - constant time
    
    Loop Analysis:
    - i starts at 1
    - i increases by 5 each iteration: 1, 6, 11, 16, ..., until i > n
    - Number of iterations = n/5 (approximately)
    - n/5 simplifies to O(n) since constants are ignored
    
    Total: O(1) + O(n/5) + O(1) = O(n)
    
    FINAL TIME COMPLEXITY: O(n) - Linear Time
    
    Explanation: The loop increments by 5 instead of 1, but this
    only affects the constant factor. The growth rate is still
    linear with respect to n, hence O(n).
*/

#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    // Input - O(1)
    cout << "Processing with n = " << n << endl;
    
    int count = 0;
    
    // Loop: increases by 5 each time → runs n/5 times → O(n)
    for (int i = 1; i <= n; i = i + 5) {
        bool check = (i <= n);  // Comparison - O(1) per iteration
        count++;
    }
    
    // Output - O(1)
    cout << "Loop ran " << count << " times" << endl;
    cout << "Expected iterations: approximately " << (n / 5) + 1 << endl;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    
    someAlgorithm(n);
    
    cout << "Algorithm completed with Time Complexity: O(n)" << endl;
    
    return 0;
}
