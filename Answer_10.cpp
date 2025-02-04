// check existance in array.

#include <iostream>

bool checkExistenceLoop(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    // input deu bro.
    std::cout << "Enter a number to check if it exists in the array: ";
    std::cin >> target;

    if (checkExistenceLoop(arr, size, target)) {
        std::cout << "Element exists in the array." << std::endl;
    } else {
        std::cout << "Element does not exist in the array." << std::endl;
    }

    return 0;
}
