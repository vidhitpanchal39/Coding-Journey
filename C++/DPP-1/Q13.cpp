#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"Enter radius";
    cin>>r;
    float volume = (4.0/3.0)*3.14*r*r*r;
    cout<<"Volume of sphere is:";
    cout<<volume;
}