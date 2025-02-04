
// check garney largest element kun ho vanera array ma

#include <iostream>
#include <vector>
#include <limits.h>

int findLargestElement(const std::vector<int>& arr) {
    int maxElement = INT_MIN; 
    for (int num : arr) {
        if (num > maxElement) {
            maxElement = num; 
        }
    }
    return maxElement;
}
int main() {
    std::vector<int> arr = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    std::cout << "The largest element is: " << findLargestElement(arr) << std::endl;
    return 0;
}
