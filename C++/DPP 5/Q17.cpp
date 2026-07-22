#include<iostream>
#include<cmath>
using namespace std;
void findMaximum(int a, int b, int c){
    cout<<max(a, max(b,c));
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    findMaximum(x,y,z);
}