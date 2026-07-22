#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%2!=0){
       for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1||i==n||j==1||j==n||i==(n/2+1)||j==(n/2+1)){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    }
    
}