#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.";
    cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(i==1 || i==n ||j==1 || j==n) cout<<1<<" ";
    //         else if(i==2 || i==n-1 ||j==2 || j==n-1) cout<<2<<" ";
    //         else if(i==3 || i==n-2 ||j==3 || j==n-2) cout<<3<<" ";
    //         else cout<<4<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=1; i<=n; i++){
        for( int j=1; j<=n; j++){
            cout<<min(i,j)<<" ";
        }
        for( int j=n-1; j>=1; j--){
            cout<<min(i,j)<<" ";
        }
        cout<<endl;
    }
    for(int i=n-1; i>=1; i--){
        for( int j=1; j<=n; j++){
            cout<<min(i,j)<<" ";
        }
        for( int j=n-1; j>=1; j--){
            cout<<min(i,j)<<" ";
        }
        cout<<endl;
    }
}