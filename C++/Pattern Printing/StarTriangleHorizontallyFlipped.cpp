#include <iostream>
using namespace std;
int main(){
    int m;
   cout<<"Enter a no."; 
    cin>>m;
    //method1
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=m+1-i; j++){
    //         cout<<"* "<<" ";
    //     }
    //     cout<<endl;
    // }

    //method 2
 for(int i=m; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* "<<" ";
        }
        cout<<endl;
    }
}