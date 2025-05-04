#include<iostream>
using namespace std;
int main(){
    float side, length, width, radius;
    cout<<"Enter side of square: ";
    cin>>side;
    float perimeter_of_square=4*side;
    cout<<"The perimeter of square is "<<perimeter_of_square<<endl;
    
    cout<<"Enter length and width of rect: ";
    cin>>length>>width;
    float perimeter_of_rect=2*(length+width);
    cout<<"The perimeter of rect is "<<perimeter_of_rect<<endl;

    cout<<"Enter radius of circle: ";
    cin>>radius;
    float perimeter_of_circle=2*3.14*radius;
    cout<<"The perimeter of circle is "<<perimeter_of_circle<<endl;

    
    return 0;
}