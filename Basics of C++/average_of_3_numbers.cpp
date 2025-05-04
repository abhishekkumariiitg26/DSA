#include<iostream>
using namespace std;
int main(){
    float num1,num2,num3;
    cout<<"enter three numbers: ";
    cin>>num1>>num2>>num3;
    float avg=(num1+num2+num3)/3;
    cout<<"The average of the three numbers is: "<<avg<<endl;
    return 0;
}