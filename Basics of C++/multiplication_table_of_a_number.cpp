#include<iostream>
using namespace std;
int main(){
    int number;
    int limit;
    cout<<"Enter the number you want to get the multiplication table of: ";
    cin>>number;
    cout<<"Enter the limit upto which you want the table (generally it is 10): ";
    cin>>limit;
    for(int i=1;i<=limit;i++){
        cout<<number<<" X "<<i<<" = "<<number*i<<endl;
    }
    return 0;
}