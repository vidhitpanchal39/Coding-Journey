#include<iostream>
using namespace std;
int fact(int x){
    int fact =1;
    for(int i=1; i<=x; i++){
        fact*=i;
    }
    return fact;
}
int findPermutation(int n, int r){
   int nPr= fact(n)/fact(n-r);
    return nPr;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<findPermutation(a,b);
}