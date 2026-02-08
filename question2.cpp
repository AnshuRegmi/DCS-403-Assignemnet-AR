#include <iostream>
using namespace std;
// Recursive function to solve Tower of Hanoi problem
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) { // Base case
        cout << "Move disk 1 from rod " << source << " to rod " << destination << endl;
        return;
    }
    // Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);
    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from rod " << source << " to rod " << destination << endl;
    // Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, destination, source);
}