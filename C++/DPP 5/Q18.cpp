#include<iostream>
using namespace std;
void printEven(int start, int end){
    for(int i=start; i<=end; i++){
        if(i%2==0) cout<<i<<" ";
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    printEven(a,b);
}