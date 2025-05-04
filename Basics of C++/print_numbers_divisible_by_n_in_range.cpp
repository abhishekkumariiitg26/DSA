#include<iostream>
using namespace std;
int main(){
    int start,end,num;
    cout<<"Enter the range, start and end: ";
    cin>>start>>end;
    cout<<"Enter the number whose divisible you want in the sum: ";
    cin>>num;
    for(int i=start;i<=end;i++){
        if(i%num==0){
            cout<<i<<" ";
        }
    }
    return 0;
}