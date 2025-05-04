#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the numeber you want to check whether it is prime or not : ";
    cin>>number;
    if(number==0 || number==1){
        cout<<number<<" is not prime number";
        return 0;
    }
    bool isPrime=true;
    for(int i=2;i<=sqrt(number);i++){
        if(number%i==0){
            isPrime=false;
            break;
        }
    }    
    
    if (isPrime)
        cout << number << " is a prime number.";
    else
        cout << number << " is not a prime number.";

    return 0;
}