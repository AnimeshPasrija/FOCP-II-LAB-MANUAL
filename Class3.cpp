#include<iostream>
using namespace std;
int main()
{
    int m1 ,m2,m3,total;
    cout<<"enter m1 :\n";
    cout<<"enter m2 :\n";
    cout<<"enter m3 :\n";

    cin>>m1>>m2>>m3; 
    cout<<"the marks of three subjects are :\n"<<m1<<endl<<m2<<endl<<m3<<endl;

    total = m1+m2+m3;
    cout<<" total="<<total;

    return 0;
}