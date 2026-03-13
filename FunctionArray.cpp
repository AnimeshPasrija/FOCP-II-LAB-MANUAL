#include<iostream>
using namespace std;

void computePerformance(int marks[], int size){
    int sum=0, min=marks[0], max=marks[0];
    float average;
    for(int i=0; i<size; i++){
        sum += marks[i];
        if(marks[i] < min) min = marks[i];
        if(marks[i] > max) max = marks[i];
    }
    average = (float)sum/size;
   
    cout<<"Average: "<<average<<endl;
    cout<<"Minimum: "<<min<<endl;
    cout<<"Maximum: "<<max<<endl;
}
int main(){
   int marks[10];
   cout<<"enter the marks for 10 subjects "<<endl;
    for(int i=0;i<10;i++){
         cin>>marks[i];
    }
    computePerformance(marks, 10);

    return 0;
}