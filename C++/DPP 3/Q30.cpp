#include <iostream>
using namespace std;
int main(){
    double a;
    int b;
    cin>>a>>b;
    double pow=1.0;
    for(int i=1; i<=b; i++){
       pow*=a;
    }
    if(b<0){
        for(int i=1; i<=-b; i++){
       pow*=a;
    }
    pow=1/pow;
    }
    cout<<pow;
}