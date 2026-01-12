//use srand to generate random numbers 
//use srand(time(0));
//int number = rand()%10;

#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
int main() {
    srand(static_cast<unsigned int>(time(0)));
    int number = rand() % 10; 
    cout << "Random number between 0 and 9: " << number << std::endl;
    return 0;
}
