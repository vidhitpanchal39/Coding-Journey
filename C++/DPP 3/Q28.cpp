#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.:";
    cin>>n;
    if(n>500) cout<<"Invalid Input";
    n++;
    while(true){
        bool isprime=true;
        if(n<2) isprime=false;
        for(int j=2; j*j<=n; j++){
            if(n%j==0){
                isprime=false;
                break;
            }
        }
       if(isprime){
        cout<<n;  break;
       } 
       n++;
    }

}