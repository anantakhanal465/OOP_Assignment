//Temperature check garney



#include <iostream>
using namespace std;

int main() {
    float temperature, convertedTemperature;
    char choice;

    cout << "Enter 'C' to convert from Celsius to Fahrenheit or 'F' to convert from Fahrenheit to Celsius: ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemperature = (temperature * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << convertedTemperature << endl;
    } else if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemperature = (temperature - 32) * 5/9;
        cout << "Temperature in Celsius: " << convertedTemperature << endl;
    } else {
        cout << "Invalid choice. Please enter 'C' or 'F'." << endl;
    }

    return 0;
}

