// write a program to check if the number is odd or even.
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    float number;
    cout << "Enter the number:";
    cin >> number;
    if (fmod(number, 2) == 0) { 
        cout << "the number is even";
    } else {
        cout << "the number is odd";
    }
    return 0;
}
