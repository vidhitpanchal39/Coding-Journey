#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two number";
    cin>>a>>b;
    int ceilinginteger = (a+b-1)/b;
    cout<<ceilinginteger;
}