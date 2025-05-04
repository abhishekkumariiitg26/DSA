#include<iostream>
using namespace std;
int main(){
    int input;
    cout<<"Enter any integer: ";
    cin>>input;
    if(input>0){
        cout<<input<<endl;
    }
    else if(input<0){
        cout<<(-1)*input<<endl;

    }
    else{
        cout<<input<<endl;
    }
    return 0;
}