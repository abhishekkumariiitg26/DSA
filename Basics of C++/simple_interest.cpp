#include<iostream>
using namespace std;
int main(){
    float principle,rate,time;
    cout<<"Enter Principle: ";
    cin>>principle;
    cout<<"Enter rate: ";
    cin>>rate;
    cout<<"Enter time: ";
    cin>>time;
    float SI=(principle*rate*time)/100;
    cout<<"The simple interest is: "<<SI<<endl;
    cout<<"The amount is: "<<principle+SI<<endl;
    return 0;
}