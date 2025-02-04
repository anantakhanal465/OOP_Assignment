#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;


float areaOfTriangle(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
float areaOfTriangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float a, b, c, base, height;

 
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    cout << "Area of triangle (using sides): " << areaOfTriangle(a, b, c) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle (using base and height): " << areaOfTriangle(base, height) << endl;

    return 0;
}