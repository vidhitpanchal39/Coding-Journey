#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=1000; i++){
       int temp=i, sum=0;
       while(temp>0){
        sum+=(temp%10);
        temp/=10;
       }
       if(sum==17) cout<<i<<" ";
    }
}