#include <iostream>
using namespace std;
int main()
{
    cout << "Enter (x,y)";
    int x, y;
    cin >>x>>y;
    if(x>0 && y>0) cout<<"1st quadrant";
    else if(x<0 && y>0) cout<<"2nd quadrant";
    else if(x<0 && y<0) cout<<"3rd quadrant";
    else if(x>0 && y<0) cout<<"4th quadrant";
    else if((x>0 || x<0) && y==0 ) cout<<"Lies on x axis";
     else if((y>0 || y<0) && x==0 ) cout<<"Lies on y axis";
     else cout<<"Lies on origin";
}