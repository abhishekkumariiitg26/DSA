#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"enter the three sides of the triangle: ";
    cin>>side1>>side2>>side3;
    if((side1<(side2+side3)) && (side2<(side1+side3))&&(side3<(side2+side1))){
        cout<<"The triangle is valid."<<endl;
    }
    else{
        cout<<"The triangle is invalid."<<endl;
    }
    return 0;
}