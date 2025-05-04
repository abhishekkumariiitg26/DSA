#include<iostream>
using namespace std;
int main(){
    int start,end;
    int product=1;
    cout<<"Enter the range, start and end: ";
    cin>>start>>end;
    
    for(int i=start;i<=end;i++){
       product*=i;
    }
    cout<<"The sum of numbers is : "<<product;
    return 0;
}