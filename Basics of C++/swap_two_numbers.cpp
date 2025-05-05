#include<iostream>
using namespace std;
int main(){
    int number1,number2;
    int temp;
    cout<<"Enter number1 and number2: ";
    cin>>number1>>number2;
    cout<<"number1 is : "<<number1<<" and number2 is "<<number2<<endl;
    temp=number1;
    number1=number2;
    number2=temp;
    cout<<"After swapping, number1 is : "<<number1<<" and number2 is "<<number2<<endl;
    return 0;
}