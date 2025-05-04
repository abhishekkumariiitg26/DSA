#include<iostream>
using namespace std;
int main(){
    int start,end;
    int sum=0;
    cout<<"Enter the range, start and end: ";
    cin>>start>>end;
    for(int i=start;i<=end;i++){
        if(i%2==0){
            sum+=i;
        }

    
    }
    cout<<"The total sum is "<<sum;

    return 0;
}