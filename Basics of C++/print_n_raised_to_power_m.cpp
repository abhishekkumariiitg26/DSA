#include<iostream>
using namespace std;
int main(){
    int n,m;
    int result=1;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the power to it to be raised : ";
    cin>>m;
    for(int i=1;i<=m;i++){
        result*=n;
    }
    cout<<result;
    return 0;
}