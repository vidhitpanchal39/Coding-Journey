#include<iostream>
using namespace std;
int sumFirstAndLast(int n){
    if(n<10) return n;
    int last = n%10;
    int first = n;
    while(first>=10){
        first/=10;
    }  
    return first+last;
    
}
int main(){
   int n;
   cin>>n;
   cout<<sumFirstAndLast(n);
}