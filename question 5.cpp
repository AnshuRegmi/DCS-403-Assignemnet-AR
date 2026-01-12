#include <iostream>
using std::cout;
using std::cin;
int main() {
int number;
cout << "Enter a number: ";
cin >> number;
if (number > 0) {
cout << "The number is positive." << std::endl;
} else {
cout << "The number is not positive." << std::endl;
}
return 0;
}