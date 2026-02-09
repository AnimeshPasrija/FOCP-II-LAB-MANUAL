#include <iostream>
using namespace std;
int main() {
    float price[10];
    float maxPrice;
    cout << "Enter prices of 10 items:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Item " << i + 1 << ": ";
        cin >> price[i];
    }
    maxPrice = price[0];
    for (int i = 1; i < 10; i++) {
        if (price[i] > maxPrice) {
            maxPrice = price[i];
        }
    }
    cout << "\nMaximum price among the items = " << maxPrice << endl;
    return 0;
}
