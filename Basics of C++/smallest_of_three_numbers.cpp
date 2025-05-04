#include<iostream>
using namespace std;
int main(){
    float num1,num2,num3;
    cout<<"Enter 3 numbers: ";
    cin>>num1>>num2>>num3;
    if((num1<num2)&&(num1<num3)){
        cout<<num1<<" is smallest of all"<<endl;
    }
    else if((num2<num1)&&(num2<num3)){

        cout<<num2<<" is smallest of all"<<endl;
    }
    else if((num3<num1)&&(num3<num2)){

        cout<<num3<<" is smallest of all"<<endl;
    }
    else{
        cout<<"invalid"<<endl;

    }
    return 0;
}