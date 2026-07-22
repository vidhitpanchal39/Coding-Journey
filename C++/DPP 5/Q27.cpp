#include<iostream>
using namespace std;
void changeTarget(int** ptr, int* newAddress){
     *ptr = newAddress;
}
int main(){
    int a=10, b=20;
    int* p= &a;
    cout<<"Before function:"<<endl;
    cout<<"*p= "<<*p<<endl;
    changeTarget(&p,&b);
    cout<<"After function:"<<endl;
    cout<<"*p= "<<*p<<endl;
}