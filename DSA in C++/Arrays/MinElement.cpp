#include<iostream>
using namespace std;
int main(){
    int arr[]= {2,9,130,15,34};
    int n= sizeof(arr)/4;
    int min=1000;
    for(int i=0; i<=n-1; i++){
        if(arr[i]<=min) min=arr[i];
    }
    cout<<min;
}