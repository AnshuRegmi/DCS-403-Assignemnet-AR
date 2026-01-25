#include <iostream>
using namespace std;
int main() {
int input;
cout << "Enter a number: ";
cin >> input;
int original = input;
int reversed = 0;
while (input != 0) {
int digit = input % 10;
reversed = reversed * 10 + digit;
input /= 10;
}
if (original == reversed) {
cout << original << " is a palindrome." << endl;
} else {
cout << original << " is not a palindrome." << endl;
}
}