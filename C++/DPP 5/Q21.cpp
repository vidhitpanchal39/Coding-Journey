#include<iostream>
#include<cmath>
using namespace std;
int hypotenuse(int perp, int base){
   int h =sqrt((perp*perp) + (base*base));
    return h;
}
int main(){
   int p,b;
   cin>>p>>b;
   cout<<hypotenuse(p,b);
}