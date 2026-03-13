#include <iostream>
using namespace std;
int addNumbers(int a, int b);
int main()
{
    int x, y, result;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    result = addNumbers(x, y);  
    cout << "Sum = " << result;
    return 0;
}
int addNumbers(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;    
}