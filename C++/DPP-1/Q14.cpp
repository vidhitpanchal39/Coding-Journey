#include<iostream>
using namespace std;
int main(){
    int a,r;
    cin>>a>>r;
    cout<<"Area of Shaded Region = Area of Square - Area of Circle";
    cout<<(a*a)-(3.14*r*r);
}