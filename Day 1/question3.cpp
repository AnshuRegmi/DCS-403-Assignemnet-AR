//pasisng an array as a function parameter

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < i<3; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[] = {3, 6, 9};
    printArray(nums, 3);

    return 0;
}