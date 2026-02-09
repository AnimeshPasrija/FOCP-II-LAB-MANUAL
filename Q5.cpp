#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "enter a number a:";
    cin>>a;
    cout << "enter another number b:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout << "a is:" << a << "|   b is:" << b;
}