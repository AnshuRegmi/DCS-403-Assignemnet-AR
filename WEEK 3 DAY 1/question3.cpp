#include <iostream>

using namespace std;

int main(){
    int n, count = 0, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    do{
        sum += count;
        count ++;
    } while(count <= n);

    cout << "Sum = " << sum << endl;
    return 0;
}