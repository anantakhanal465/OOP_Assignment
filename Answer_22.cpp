// area of triangle


#include <iostream>
using namespace std;

int main() {
    float base, height, area;

    cout << "Hey there! Let's calculate the area of a triangle." << endl;
    cout << "Please enter the base of the triangle: ";
    cin >> base;
    
    cout << "Great! Now, enter the height of the triangle: ";
    cin >> height;

    area = 0.5 * base * height;
    
    cout << "Area of triangle is: " << area << "." << endl;
    
    return 0;
}