#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k,count,l;
    int n,t;
    cin>>n>>t;
    if(n==1&&t==10)
    {
        cout<<"-1\n";
    }
    else
    {
    int a[n];
    if(t<10){
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
            a[i]=t;
        }
        else a[i]=0;
    }
    }
    else
    {
       for(i=0;i<n-1;i++)
    {
        if(i==n-2)
        {
            a[i]=0;
            a[i+1]=1;
        }
        else a[i]=0;
    }
    }
    for(i=n-1;i>-1;i--)
    {
        cout<<a[i];
    }

    }
  return 0;
}
