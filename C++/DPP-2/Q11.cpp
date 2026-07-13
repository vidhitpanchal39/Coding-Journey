#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    if(a*b>0) cout<<"Product is positive";
    else if(a*b<0) cout<<"Product is negative";
    else cout<<"Product is zero";
}