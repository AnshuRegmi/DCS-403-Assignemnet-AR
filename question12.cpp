//obj: randomly display uppercase letters (A-Z) use random number functions from <cstdlib> and <ctime>
//hints rand(): returns 0 to rand_max, %26 keeps values within 0 to 25 adding 'A' maps the range to A-Z

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    for (int i = 0; i < 5; i++) {
        char letter = 'A' + (rand() % 26);
        cout << "Random letter: '" << letter << "' with ASCII value: " << (int)letter << endl;
    }

    return 0;
}

