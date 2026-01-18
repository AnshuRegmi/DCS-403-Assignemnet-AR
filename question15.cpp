#include <iostream>
#include <iomanip>
using namespace std;
int main() {
int n;
double sum = 0.0;
cout << "Enter the number of terms: ";
cin >> n;
for (int i = 1; i <= n; i++) {
sum += 1.0 / i;
}
cout << fixed << setprecision(4);
cout << "Sum of the series: " << sum << endl;

return 0;
}