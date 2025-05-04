#include<iostream>
using namespace std;
int fibo(int position){
    if(position==0){
        return -1;
    }
    if(position==1){
        return 0;
    }
    if(position==2){
        return 1;
    }
    return fibo(position-1)+fibo(position-2);
}
int main(){
    int position;
    cout<<"Enter the position you want to get that fibonacci number: ";
    cin>>position;
    int result=fibo(position);
    if(result==-1){
        cout<<"invalid positon."<<endl;
        return 0;
    }
    cout<<result;

    return 0;
}