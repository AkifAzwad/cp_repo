#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int a,b;
    int x,y;
    int temp;
    while(1)
    {
        cin>>a>>b;
        if(a==-1)
        {
            break;
        }
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        x=b-a;
        y=(a-0)+(99-b)+1;
        if(x<y)
        {
            cout<<x<<"\n";
        }
        else
        {
            cout<<y<<"\n";
        }
    }
  return 0;
}
