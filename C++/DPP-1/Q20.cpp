#include<iostream>
using namespace std;
int main(){
    double m,d,t;
    cout<<"Enter marked price";
    cin>>m;
    cout<<"Enter discount";
    cin>>d;
    cout<<"Enter tax % age";
    cin>>t;
    double DiscountPrice= (m-(d/100)*m);
    double finalprice = DiscountPrice*(1+(t/100));
    cout<<finalprice;
}