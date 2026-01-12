//write a program to check if a number is 1. posetive and even 2. posetive and odd, 3, negative , 4. zero 
#include <iostream>
using std::cout;
using std::cin;
int main() {
int number;
cout << "Enter a number: ";
cin >> number;
if (number > 0) {
if (number % 2 == 0) {
cout <<"The number is positive and even."<<std::endl;
} else {
cout <<"The number is positive and odd." <<std::endl;
}
} else if (number<0) {
cout << "The number is negative." <<std::endl;
} else {
cout << "The number is zero."<<std::endl;
}
return 0;
}