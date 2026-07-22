#include<iostream>
using namespace std;
double balance = 0.0;
void deposit(double amount){
    balance+=amount;
}
void withdraw(double amount){
    balance-=amount;
}
int main(){
     deposit(500);
     withdraw(200);
     cout<<"Balance:"<<balance;
}