#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter two numbers:";
    cin >> a >> b;
    for(int i=a+1; i<b; i++){
        bool isprime = true;
        if(i<2) isprime=false;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){ isprime=false;
            break;}
        }
        if(isprime) cout<<i<<" ";
    }
}