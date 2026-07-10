#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i=2; i<=3*n-1; i+=3){
        cout<<i<<" ";
    }
}
//int a=3, d=4;
//for(int i=1; i<=n; i++){
//cout<<a<<" ";
//a+=d;
//7}