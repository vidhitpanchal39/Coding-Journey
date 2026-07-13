#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.";
    cin>>n;
    for(int i=1; i<=n; i++){
         for(int j=1; j<=n; j++){

            // cout<<min(i,j)<<" ";
            if(i<=j) cout<<2*i-1<<" ";
            else cout<<2*j-1<<" ";
         }
         cout<<endl;
    }
}