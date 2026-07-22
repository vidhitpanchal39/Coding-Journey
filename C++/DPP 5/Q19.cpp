#include<iostream>
using namespace std;
void swapNumbers(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp; 
    cout<<*a<<" "<<*b<<endl;
}
int main(){
     int x,y;
     cin>>x>>y;
     swapNumbers(&x,&y);
}