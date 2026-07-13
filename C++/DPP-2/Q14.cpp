#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter two numbers:";
    cin>>m>>n;
    if(m%2!=0 && n%2!=0) cout<<"Both are odd";
    else if(m%2==0 && n%2==0) cout<<"None is odd";
    else cout<<"one is odd";

}