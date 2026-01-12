//write a program to assign grades based on marks (A,B,C,F)
//80-100=A 60-79=B, 40-59=C and below 40= F using switch case

#include <iostream>
using std::cout;
using std::cin;
int main(){
int marks;
cout <<"Enter your marks: ";
cin >> marks;
switch (marks / 10) {
case 10:
case 9:
case 8:
cout <<"Grade: A"<<std::endl;
break;
case 7:
case 6:
cout << "Grade: B" << std::endl;
break;
case 5:
case 4:
cout << "Grade: C" << std::endl;
break;
case 3:
case 2:
case 1:
case 0:
if (marks >= 0)
cout << "Grade: F" << std::endl;
else
cout << "Invalid marks entered." << std::endl;
break;
default:
cout << "Invalid marks entered." << std::endl;
}
return 0;
}