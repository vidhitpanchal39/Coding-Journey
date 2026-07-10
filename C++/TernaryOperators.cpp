#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    (a>=b && a>=c) ? cout<<a<<"is greatest" : ( (b>=a && b>=c)? cout<<b<<"is greatest" : cout<<c<<"is greatest"); 
}