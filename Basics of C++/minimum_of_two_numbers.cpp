#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;
    if(num1>num2){
        cout<<num2<<" is less than "<<num1<<endl;
    }
    else{
        cout<<num1<<" is less than "<<num2<<endl;
    }
    return 0;
}