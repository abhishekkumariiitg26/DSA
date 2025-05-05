#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number you want to check whether it is odd or even: ";
    cin>>number;
    if(number&1){
        cout<<number<<" is odd";
    }
    else{
        cout<<number<<" is even";
        
    }
    return 0;
}