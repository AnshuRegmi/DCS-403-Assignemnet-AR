/*
Q10. Check if String is Palindrome
This program checks if a string is a palindrome using recursion. It compares
characters at the start and end positions, moving inward with each recursive
call. Returns true only if all corresponding character pairs match.
*/

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string &str, int start, int end) {
    if (start >= end) return true;
    if (str[start] != str[end]) return false;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string str;
    cin >> str;
    if (isPalindrome(str, 0, str.length() - 1)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}
