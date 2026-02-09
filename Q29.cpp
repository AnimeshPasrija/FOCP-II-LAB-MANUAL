#include <iostream>
using namespace std;
int main() {
    float temp[30];
    float minTemp;   
    cout << "Enter temperatures for 30 days:\n";
    for (int i = 0; i < 30; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> temp[i];
    }
    minTemp = temp[0];    
    for (int i = 1; i < 30; i++) {
        if (temp[i] < minTemp) {
            minTemp = temp[i];
        }
    }
cout << "\nMinimum temperature for the month = " << minTemp << endl;
 return 0;
}