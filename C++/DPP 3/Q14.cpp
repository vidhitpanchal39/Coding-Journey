#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter two numbers:";
    cin>>n>>m;
    if(n<m){
        for(int i=n+1; i<m; i++){
            if(i%2==0) cout<<i<<" ";
           
        }
    }
    else{
        for(int i=m+1; i<n; i++){
            if(i%2==0) cout<<i<<" ";
        }
    }
}