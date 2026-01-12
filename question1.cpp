#include <iostream>
using namespace std;

int main() {
    int baseSalary = 50000;
    const double BONUS_PERCENTAGE = 15.0;

    double bonusAmount;
    double totalSalary;

    bonusAmount = baseSalary * (BONUS_PERCENTAGE / 100.0);
    totalSalary = baseSalary + bonusAmount;

    cout << "Total Salary: " << totalSalary << endl;

    return 0;
}
