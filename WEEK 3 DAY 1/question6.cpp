#include <iostream>
int main() {
    int number;
    std::cout << "Enter numbers (enter -1 to stop): " << std::endl;
    while (true) {
        std::cin >> number;
        if (number == -1) {
            break;
        }
        std::cout << "You entered: " << number << std::endl;
    }
    return 0;
}