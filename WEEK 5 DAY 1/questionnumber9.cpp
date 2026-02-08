/*
Q9. Tower of Hanoi
This program solves the classic Tower of Hanoi puzzle using recursion. It moves
n disks from source to destination using an auxiliary rod. The algorithm moves
n-1 disks to auxiliary, moves the largest disk to destination, then moves n-1 back.
*/

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 0) return;
    towerOfHanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
