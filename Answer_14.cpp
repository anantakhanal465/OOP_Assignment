// for loop even number ko lagi.

#include <iostream>

int main() {
    for (int i = 1; i <= 20; ++i) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    return 0;
}
