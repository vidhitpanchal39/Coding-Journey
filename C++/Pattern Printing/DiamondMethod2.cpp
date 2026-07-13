#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    int nsp=n-1, nst=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<<" "<<" ";
        }
        for(int j=1; j<=nst; j++){
            cout<<"*"<<" ";
        }
         nsp--;
         nst+=2;
        cout<<endl;
    }
int n_sp=1, n_st=2*n-3;
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n_sp; j++){
            cout<<" "<<" ";
        }
        for(int j=1; j<=n_st; j++){
            cout<<"*"<<" ";
        }
         n_sp++;
         n_st-=2;
        cout<<endl;
    }

}   