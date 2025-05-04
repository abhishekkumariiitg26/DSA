#include<iostream>
using namespace std;
int main(){
    int start,end,num;
    int sum=0;
    cout<<"Enter the range, start and end: ";
    cin>>start>>end;
    cout<<"Enter the number whose divisible you want in the sum: ";
    cin>>num;
    for(int i=start;i<=end;i++){
        if(i%num==0){
           sum+=i;
        }
    }
    cout<<"The sum of the numbers is : "<<sum;
    return 0;
}