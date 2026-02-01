/*
Q14: Matrix Multiplication (2x3 x 3x2)

This program multiplies matrix A (2x3) with matrix B (3x2) to produce matrix C (2x2). It uses triple nested loops where each element of C is computed by multiplying a row of A with a column of B.

Output:
Enter 6 elements for matrix A (2x3): 1 2 3 4 5 6
Enter 6 elements for matrix B (3x2): 7 8 9 10 11 12
C = A x B:
58 64
139 154
*/

#include <iostream>
using namespace std;

int main() {
    int A[2][3], B[3][2], C[2][2];

    cout << "Enter 6 elements for matrix A (2x3): ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter 6 elements for matrix B (3x2): ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "C = A x B:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
