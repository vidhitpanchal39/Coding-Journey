#include<iostream>
using namespace std;
int main(){
    int marks[]={74,56,91,24,67,35,45,68,31};
    int n = sizeof(marks)/4;
    for(int i=0; i<=n-1; i++){
        cout<<marks[i]<<" ";
    } 
}