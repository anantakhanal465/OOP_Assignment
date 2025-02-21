

// Write a program in C++ to find the last prime number that occurs before the entered
// number.
// Input a number to find the last prime number occurs before the number: 50
// 47 is the last prime number before 50

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Input a number to find the last prime number occurs before the number: ";
    cin >> n;
    for(int i = n - 1; i > 1; i--){
        bool isPrime = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout << i << " this is the last prime number before " << n << endl;
            break;
        }
    }
    
    return 0;
}