#include<iostream>
using namespace std;
int main(){
    int start,end;
    int sum=0;
    cout<<"Enter the range, start and end: ";
    cin>>start>>end;
    
    for(int i=start;i<=end;i++){
       sum+=i;
    }
    cout<<"The sum of numbers is : "<<sum;
    return 0;
}