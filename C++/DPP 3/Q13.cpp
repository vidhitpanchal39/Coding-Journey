#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. for the sum";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<sum<<" ";
    // cout<<n*(n+1)/2<<" ";
}