#include<iostream>
using namespace std;
int main()
{
  cout<<"Enter a character:";
  char ch;
  cin>>ch;
  if(ch>='A' && ch<='Z') cout<<"Capital Alphabet";
  else cout<<"Not a capital alphabet" ; 
}