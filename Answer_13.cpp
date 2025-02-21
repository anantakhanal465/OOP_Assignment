
// Write a C++ program to count prime numbers less than a given positive number.
// Sample Input: n = 8
// Sample Output: Number of prime numbers less than 8 is 2
// Sample Input: n = 30
// Sample Output: Number of prime numbers less than 30 is 10

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    for(int i = 2; i < n; i++){
        bool isPrime = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            count++;
        }
    }
    cout << "Number of prime numbers less than " << n << " is: " << count << endl;
    
    return 0;
}
