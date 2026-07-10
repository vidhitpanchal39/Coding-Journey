#include<iostream>
using namespace std;
int main()
{
    int length, breadth;
    cout<<"Enter length of rectangle:";
    cin>>length;
    cout<<"Enter breadth of rectangle";
    cin>>breadth;
    int area=length*breadth;
    int perimeter=2*(length+breadth);
    if(area>perimeter) cout<<"area is greater than perimeter";
    else cout<<"perimeter is greater than area";
}