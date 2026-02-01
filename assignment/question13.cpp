/*
Q13: Matrix Addition

This program adds two 2x2 matrices and stores the result in a third matrix. Addition is performed by adding elements at the same positions using the formula C[i][j] = A[i][j] + B[i][j].

Output:
Enter 4 elements for matrix A: 1 2 3 4
Enter 4 elements for matrix B: 5 6 7 8
Result:
6 8
10 12
*/

#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], C[2][2];

    cout << "Enter 4 elements for matrix A: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter 4 elements for matrix B: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Result:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
