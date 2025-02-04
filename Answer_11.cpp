
// count down garney

#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number to count down from: ";
    std::cin >> number;

    while (number >= 0) {
        std::cout << number << std::endl;
        number--;  // -- vanako ghatney by 1 // ++ vanako badney by 1
    }

    return 0;
}
