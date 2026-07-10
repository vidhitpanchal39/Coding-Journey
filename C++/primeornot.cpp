#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number";
    cin >> n;
    bool flag = false;
    for (int i = 2; i <= n - 1; i++){
        if (n % i == 0){
            flag = true;
            break;
        }
    }
    if (n == 1) cout << " Neither prime nor composite";
    else if (flag == true) cout << "Composite number";
    else  cout << "Prime number";
}