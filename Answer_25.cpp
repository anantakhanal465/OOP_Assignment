#include <iostream>

int main() {
    int numbers[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }

    return 0;
}
