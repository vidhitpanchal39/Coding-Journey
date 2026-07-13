#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i=97; i<=n; i++){
        for(int j=97; j<=n; j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
}