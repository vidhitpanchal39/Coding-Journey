#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
           for(int j=1; j<=n; j++){
               cout<<i<<" ";
            }
        }
        else{
            for(int j=1; j<n; j++){
                cout<<" "<<i;
            }
        }
        
        cout<<endl;
    }
}