#include<iostream>
using namespace std;

int main(){
    int a;
    string s;
    getline(cin,s);
    cout<<"The name is : "<<s<<endl;

int num;
string name;

cin >> num;
cin.ignore();
getline(cin, name);
cout<<"Number is : "<<num<<endl;
cout<<"The name is : "<<name<<endl;
return 0;
}