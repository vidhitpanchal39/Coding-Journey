#include<iostream>
using namespace std;
int main(){
    float x ;
    cout<<"Enter a real no.:";
    cin>>x;
    int y= (int)x;
    if(y==x) cout<<"Integer";
    else cout<<"Not an integer";

}