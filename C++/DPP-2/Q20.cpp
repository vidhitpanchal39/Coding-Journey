#include<iostream>
using namespace std;
int main(){
    int units;
    cout<<"Enter unit:";
    cin>>units;
    double baseBill=0;
    if ( units <= 100) {
 baseBill = units * 1.50;
 } else if ( units <= 300) {
 baseBill = (100 * 1.50) + ( units - 100) * 2.50;
 } else {
baseBill = (100 * 1.50) + (200 * 2.50) + ( units - 300) *

4.00;

}
double totalBill= baseBill *1.15;
cout<<"Total Bill = $"<<totalBill<<endl;
}