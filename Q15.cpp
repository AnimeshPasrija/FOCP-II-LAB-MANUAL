#include <iostream>
using namespace std;

int main() {
    int n, num, max;

    cout << "Enter number of values: ";
    cin >> n;

    cout << "Enter numbers:\n";
    cin >> max;   // first number assumed as largest

    for(int i = 2; i <= n; i++) {
        cin >> num;
        if(num > max)
            max = num;
    }

    cout << "Largest number = " << max;

    return 0;
}