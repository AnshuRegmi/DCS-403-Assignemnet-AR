/*
    WEEK 6 DAY 1 - Question 4: Time Complexity Analysis
    
    Time Complexity Breakdown:
    --------------------------
    1. Assignment operation: O(1) - constant time
    2. Loop (i = n down to 1, dividing by 2): Runs log₂(n) times → O(log n)
    3. Output operation: O(1) - constant time
    
    Loop Analysis:
    - i starts at n
    - i is halved each iteration: n → n/2 → n/4 → n/8 → ... → 1
    - Number of iterations = log₂(n)
    
    Example for n = 16:
    - Iteration 1: i = 16
    - Iteration 2: i = 8
    - Iteration 3: i = 4
    - Iteration 4: i = 2
    - Iteration 5: i = 1
    - Total: 5 iterations = log₂(16) + 1 ≈ log₂(n)
    
    Total: O(1) + O(log n) + O(1) = O(log n)
    
    FINAL TIME COMPLEXITY: O(log n) - Logarithmic Time
    
    Explanation: Dividing by 2 repeatedly is the hallmark of
    logarithmic complexity. The loop runs log₂(n) times because
    we're continuously halving the value until it reaches 1.
*/

#include <iostream>
#include <cmath>
using namespace std;

void someAlgorithm(int n) {
    // Assignment - O(1)
    int x = 0;
    
    int count = 0;
    
    // Loop: divides by 2 each time → runs log₂(n) times → O(log n)
    for (int i = n; i >= 1; i /= 2) {
        x = x + i;  // Arithmetic operation - O(1) per iteration
        count++;
        cout << "Iteration " << count << ": i = " << i << endl;
    }
    
    // Output - O(1)
    cout << "\nLoop ran " << count << " times" << endl;
    cout << "Expected iterations: log₂(" << n << ") ≈ " << (int)(log2(n)) + 1 << endl;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    
    someAlgorithm(n);
    
    cout << "\nAlgorithm completed with Time Complexity: O(log n)" << endl;
    
    return 0;
}
