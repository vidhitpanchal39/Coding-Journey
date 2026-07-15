#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int rev=0, temp=n;
    while(temp>0){
        rev = rev*10 + (temp%10);
        temp/=10;
    }
    if(rev==n) cout<<"Palindrome";
    else cout<<"Not a palindrome";
}