#include<iostream>
using namespace std;
int main(){
    float length,width;
    cout<<"Enter the length and width of the rectangle: ";
    cin>>length>>width;
    float area=length*width;
    cout<<"The area of the rectangle is : "<<area<<" sq. units";
    return 0;
}