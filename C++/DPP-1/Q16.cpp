#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number";
    cin >> n;
    if (n == 0) cout << "7";
    else if (n % 7 == 0)  cout << "0";
    else  cout << 7 - (n % 7);
}