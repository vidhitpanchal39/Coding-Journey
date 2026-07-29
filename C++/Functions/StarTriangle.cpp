#include<iostream>
using namespace std;
void star(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter a";
    cin>>a;
    star(a);
    int b;
    cout<<"Enter b";
    cin>>b;
    star(b);
    int c;
    cout<<"Enter c";
    cin>>c;
    star(c);
}