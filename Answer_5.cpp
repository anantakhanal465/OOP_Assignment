
// Write a C++ program to list non-prime numbers from 1 to an upperbound.
// Sample Output:
// Input the upperlimit: 25
// The non-prime numbers are:
// 4 6 8 9 10 12 14 15 16 18 20 21 22 24 25

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Input the upperlimit: ";
    cin >> n;
    cout << "The non-prime numbers are:" << endl;
    for(int i = 2; i <= n; i++){
        bool isPrime = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(!isPrime){
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
