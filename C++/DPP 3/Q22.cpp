#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=500; i++){
       int temp=i;
       bool found = false;
       while(temp>0){
        int digit = temp % 10;
        if(digit ==2 || digit ==7){
            found = true;
            break;
        }
        temp/=10;
       }
       if(found) cout<<i<<" ";
    }
}