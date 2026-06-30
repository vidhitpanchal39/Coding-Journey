#include<iostream>
using namespace std;
int main(){
    cout<<"Enter radius";
    float radius;
    cin>>radius;
    float volume=(4.0/3.0) *3.14*radius*radius*radius;
    cout<<"Volume of sphere is:";
    cout<<volume;
}