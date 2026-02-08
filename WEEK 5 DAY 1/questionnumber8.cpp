/*
Q8. Reverse a String Using Recursion
This program reverses a string by recursively swapping characters from both
ends moving inward. The start index increases and end index decreases with
each call until they meet or cross, completing the reversal.
*/

#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str, int start, int end) {
    if (start >= end) return;
    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
}

int main() {
    string str;
    cin >> str;
    reverseString(str, 0, str.length() - 1);
    cout << str << endl;
    return 0;
}
