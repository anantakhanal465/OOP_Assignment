

// Write a C++ program to verify that all of the letters in the second string appear in the first string as well. Return true otherwise false.


#include <iostream>
#include <string>
using namespace std;

bool containsAllLetters(const string &s1, const string &s2) {
    // case-sensitive check
    for (char c : s2) {
        if (s1.find(c) == string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    string first = "Apple";
    string second = "Ap";

    bool result = containsAllLetters(first, second);
    cout << boolalpha << result << endl;

    return 0;
}
