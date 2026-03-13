#include<iostream>
using namespace std;
void welcome(string name="User")
{
    cout<<"\n Welcome "<<name;
}
int main()
{ 
    welcome();
    welcome("Section A");
    return 0;
}