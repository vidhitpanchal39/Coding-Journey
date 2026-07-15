#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int product = 1;
    if(n==0) cout<<'0';
    else{
    while(n!=0){
        int lastdigit= n%10;
        product*=lastdigit;
        n/=10;
    }
    cout<<product;
}
}