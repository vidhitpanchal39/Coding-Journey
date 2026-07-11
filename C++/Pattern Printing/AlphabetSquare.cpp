#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i=65; i<=n; i++){
        for(int j=65; j<=n; j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
}