#include <iostream>
using namespace std;
int main() {
    float celsius, fahrenheit;
    int choice;
    cout << "Temperature Conversion Menu\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> fahrenheit;
            celsius = (fahrenheit - 32) * 5 / 9;
            cout << "Temperature in Celsius = " << celsius << endl;
            break;
        case 2:
            cout << "Enter temperature in Celsius: ";
            cin >> celsius;
            fahrenheit = (celsius * 9 / 5) + 32;
            cout << "Temperature in Fahrenheit = " << fahrenheit << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
