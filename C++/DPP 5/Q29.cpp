#include<iostream>
using namespace std;
void sortTwo(int &a, int &b){
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
}
int main(){
    int x,y;
    cin>>x>>y;
    sortTwo(x,y);
    cout<<x<<" "<<y;
}