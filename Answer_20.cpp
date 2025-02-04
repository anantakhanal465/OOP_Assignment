// Find the sum of all the elaments in an array.

#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]); 

    for (int i = 0; i < n; ++i) {
        sum += arr[i]; 
    }

    std::cout << "The sum of the elements in the array is: " << sum << std::endl;

    return 0;
}


