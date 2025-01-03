#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k;
    int n,l;
    cin>>n>>l;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int cur,pos=0,m=0;
    for(i=0;i<n;i++)
    {
        cur=a[i]-pos;
        pos=a[i];
        if(cur>m)m=cur;
    }
    cur=max(a[0]-0,l-a[n-1]);
    double x,y;
    y=(double)cur;
    x=(double)m;
    x=x/2;
    printf("%lf\n",max(x,y));
  return 0;
}
