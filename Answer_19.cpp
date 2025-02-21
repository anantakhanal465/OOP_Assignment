// Write a C++ program to convert a binary number to a decimal number.
// Sample Output:
// Input a binary number: 1011
// The decimal number: 11


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string binary;
    cout << "Input a binary number: ";
    cin >> binary;
    int decimal = 0;
    for(int i = 0; i < binary.length(); i++){
        decimal += (binary[i] - '0') * pow(2, binary.length() - i - 1);
    }
    cout << "The decimal number: " << decimal << endl;
    
    return 0;
}
