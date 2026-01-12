//write a program to assign grades based on marks (A,B,C,F)
//80-100=A 60-79=B, 40-59=C and below 40= F

#include <iostream>
using std::cout;
using std::cin;
int main() {
int marks;
cout << "Enter your marks: ";
cin >> marks;
if (marks >= 80 && marks <= 100) {
cout << "Grade: A" << std::endl;
 } else if (marks >= 60 && marks < 80) {
cout << "Grade: B" << std::endl;
 } else if (marks >= 40 && marks < 60) {
cout << "Grade: C" << std::endl;
} else if (marks < 40 && marks >= 0) {
cout << "Grade: F" << std::endl;
} else {
cout << "Invalid marks entered." << std::endl;
 }
return 0;
}
