#include<iostream>
using namespace std;
int main(){
    int sides;
    cout<<"Enter no. of sides:";
    cin>>sides;
    int S=(sides-2)*180;
    cout<<"Sum = "<<S<<endl;
    if(sides>2 && S%180==0) cout<<"Valid Polygon";
    else cout<<"Invalid Polygon";
}