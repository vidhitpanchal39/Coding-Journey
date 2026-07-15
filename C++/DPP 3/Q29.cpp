#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.:";
    cin>>n;
    for(int i=1; i<n; i++){
        if(n%i==0){
            bool isprime=true;
            if(i<2) isprime=false;
            for(int j=2; j*j<=i; j++){
                if(i%j==0){
                    isprime=false; break;
                } 
            }
            if(isprime) cout<<i<<" ";
        }
    }
}