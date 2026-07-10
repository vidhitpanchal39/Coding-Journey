#include<iostream>
using namespace std;
int main(){
    double m,v;
    cout<<"Enter mass in kg"<<endl;
    cin>>m;
    cout<<"Enter velocity in m/s";
    cin>>v;
    double KE= (0.5*m*v*v);
    cout<<KE;
}