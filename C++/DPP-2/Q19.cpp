#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter length of sides:";
    cin>>a>>b>>c;
    if(a+b>c || b+c>a || c+a>b){
         if(a==b && b==c &&c==a) cout<<"Equilateral Triangle";
         else if(a==b || b==c ||c==a) cout<<"Isosceles Triangle";
         else cout<<"Scalene Triangle";

    }
   

}