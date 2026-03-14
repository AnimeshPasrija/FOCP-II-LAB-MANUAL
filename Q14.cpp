#include <iostream>
using namespace std;

int main() {
    int ch;
    float a, b;

    do {
        cout << "\n1.Add 2.Subtract 3.Multiply 4.Divide 5.Exit\n";
        cin >> ch;

        if(ch>=1 && ch<=4){
            cin >> a >> b;
        }

        switch(ch){
            case 1: cout << a+b; break;
            case 2: cout << a-b; break;
            case 3: cout << a*b; break;
            case 4: cout << a/b; break;
        }

    } while(ch!=5);

    return 0;
}