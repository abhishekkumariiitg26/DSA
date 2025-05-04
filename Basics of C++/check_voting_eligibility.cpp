#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>100 || age<=0){
        cout<<"Invalid age."<<endl;
        return 0;
    }
    if(age>=18 && age<=100){
        cout<<"You can drive."<<endl;
    }
    else{
        cout<<"You cannot drive."<<endl;
    }
}