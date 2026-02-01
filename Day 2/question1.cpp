//passing a 2d array into a function
#include <iostream>
using namespace std;
void printMatrix(const int arr[][4], int rows){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    printMatrix(matrix, 3);
    return 0;
}