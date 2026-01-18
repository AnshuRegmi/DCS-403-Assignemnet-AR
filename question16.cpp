#include <iostream>
using namespace std;
int main() {
int numberOfStudents;
double score, highestScore = 0.0;
cout << "Enter the number of students: ";
cin >> numberOfStudents;
for (int i = 1; i <= numberOfStudents; i++) {
cout << "Enter score for student " << i << ": ";
cin >> score;
if (score > highestScore) {
highestScore = score;
}
}
cout << "The highest score is: " << highestScore << endl;
return 0;
}