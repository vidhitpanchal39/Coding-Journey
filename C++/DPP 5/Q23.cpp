#include<iostream>
#include<cmath>
using namespace std;
void updateValues(int* a, int* b){
    int tempA = *a, tempB=*b ;
    *a = tempA+tempB;
    *b=abs(tempA- tempB);
    
}
int main(){
    int x,y;
    cin>>x>>y;
    updateValues(&x,&y);
    cout<<x<<" "<<y;
}