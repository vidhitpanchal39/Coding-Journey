#include<iostream>
using namespace std;
int main(){
   float cp, sp;
   cout<<"Enter cost price";
   cin>>cp;
   cout<<"Enter selling price";
   cin>>sp;
   if(sp>cp) cout<<"Profit" << (sp-cp);
   else if(cp>sp) cout<<"Loss" << (cp-sp);
   else cout<<"No Profit No Loss";
}