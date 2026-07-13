#include <iostream>
using namespace std;
int main(){
    int n=4;
    cout<<"Enter a number"<<endl;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
          if((i+j)<=n) cout<<" "<<" ";
          else cout<<"*"<<" ";
        }
        cout<<endl;
    }
}