#include <iostream>
#include <random>
#include <ctime> 

using namespace std;

int main() {
    int lotteryNumber[6];
    
    mt19937 gen(static_cast<unsigned int>(time(0))); 
    uniform_int_distribution<> dis(1, 50);

    for (int i = 0; i < 6; ++i) {
        int temp;
        bool isDuplicate;

        do {
            isDuplicate = false;
            temp = dis(gen);
            for (int j = 0; j < i; ++j) {
                if (lotteryNumber[j] == temp) {
                    isDuplicate = true;
                    break;
                }
            }
        } while (isDuplicate);

        lotteryNumber[i] = temp;
    }

    cout << "Lottery Numbers: ";
    for (int i = 0; i < 6; ++i) {
        cout << lotteryNumber[i] << " ";
    }
    
    return 0;
}