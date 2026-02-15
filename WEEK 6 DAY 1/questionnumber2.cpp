/*
    WEEK 6 DAY 1 - Question 2: Time Complexity Analysis
    
    Time Complexity Breakdown:
    --------------------------
    1. Input operation: O(1) - constant time
    2. Loop (i = n down to 1, decreasing by 4): Runs n/4 times → O(n)
    3. Output operation: O(1) - constant time
    
    Loop Analysis:
    - i starts at n
    - i decreases by 4 each iteration: n, n-4, n-8, ..., until i < 1
    - Number of iterations = n/4 (approximately)
    - n/4 simplifies to O(n) since constants are ignored
    
    Total: O(1) + O(n/4) + O(1) = O(n)
    
    FINAL TIME COMPLEXITY: O(n) - Linear Time
    
    Explanation: Even though the loop decrements by 4 instead of 1,
    it still runs proportionally to n. The constant factor (1/4) is
    ignored in Big-O notation, resulting in O(n).
*/

#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    // Input - O(1)
    cout << "Processing with n = " << n << endl;
    
    int count = 0;
    
    // Loop: decreases by 4 each time → runs n/4 times → O(n)
    for (int i = n; i >= 1; i = i - 4) {
        count++;  // Arithmetic operation - O(1) per iteration
    }
    
    // Output - O(1)
    cout << "Loop ran " << count << " times" << endl;
    cout << "Expected iterations: approximately " << n / 4 << endl;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    
    someAlgorithm(n);
    
    cout << "Algorithm completed with Time Complexity: O(n)" << endl;
    
    return 0;
}
