#include<iostream>
using namespace std;
void calculateArea(double radius){
    float Circlearea= (3.14)*radius*radius;
    cout<<Circlearea;
}
void calculateArea(double length, double breadth){
    float Rectanglearea= length*breadth;
    cout<<Rectanglearea;
}
int main(){
     calculateArea(3);
     cout<<endl;
     calculateArea(4,7);
}