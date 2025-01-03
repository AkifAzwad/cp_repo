#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k;
    int n,p,q;
    cin>>n;
    int x[n+1];
    memset(x,0,(n+1)*sizeof(x[0]));
    cin>>p;
    int a[p];
    for(i=0;i<p;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    int b[q];
    for(i=0;i<q;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<p;i++)
    {
        x[a[i]]=1;
    }
    for(i=0;i<q;i++)
    {
        x[b[i]]=1;
    }
    for(i=1;i<n+1;i++)
    {
        if(x[i]!=1)
        {
            printf("Oh, my keyboard!\n");
            break;
        }
    }
    if(i==n+1)
    {
          printf("I become the guy.\n");
    }
  return 0;
}
