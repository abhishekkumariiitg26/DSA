#include<iostream>
using namespace std;

int factorial_calculation(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial_calculation(n-1);
}

int main(){
    int n;
    cout<<"Enter the number whose factorial you want to find: ";
    cin>>n;
    int result=factorial_calculation(n);
    cout<<"The factorial of "<<n<<" is : "<<result<<endl;
    return 0;
}