#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<ch<<" is vowel";
    }
    else{
        cout<<ch<<" is consonant."<<endl;
    }
    return 0;
}