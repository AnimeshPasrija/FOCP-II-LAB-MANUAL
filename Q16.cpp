#include <iostream>
using namespace std;

int main() {
    int n, i, flag = 0;
    cout << "Enter number: ";
    cin >> n;

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(n == 1)
        cout << "Not Prime";
    else if(flag == 0)
        cout << "Prime Number";
    else
        cout << "Not Prime";

    return 0;
}