#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int main()
{
    int i,j,n;
    int a[3];
    while(1)
    {
        cin>>a[0]>>a[1]>>a[2];
        if(a[0]==0)
        {
            break;
        }
        sort(a,a+3);
        if((a[0]*a[0])+(a[1]*a[1])==(a[2]*a[2]))
        {
            cout<<"right"<<"\n";
        }
        else
            cout<<"wrong"<<"\n";
    }
  return 0;
}
