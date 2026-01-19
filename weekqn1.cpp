#include <iostream>
using namespace std;
int main(){
    int n, count = 0, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    while(count < n){
        count++;
        sum += count;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
