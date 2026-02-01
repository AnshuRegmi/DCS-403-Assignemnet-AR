/*
Q1: Store and Display 5 Integers

This program declares an array of 5 integers, takes input from the user using a loop, and then displays all the elements using another loop.

Output:
Enter 5 integers: 10 20 30 40 50
Array elements are: 10 20 30 40 50
*/

#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
