#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Multiplication Table of " << num << ":" << endl;
    do {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    } while (i <= 10);
    
    return 0;
}
