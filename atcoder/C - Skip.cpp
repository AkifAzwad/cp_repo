#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    long long i,j,k;
    long long n,x;
    cin>>n>>x;
    long long a[n+1];
    long long min[n];
    for(i=0;i<n;i++)cin>>a[i];
    a[i]=x;
    sort(a,a+i+1);
    for(i=1;i<=n;i++)
    {
        k=a[i]-a[i-1];
        min[i-1]=k;
    }
    j=min[0];
    for(i=1;i<n;i++)
    {
        j=__gcd(j,min[i]);
    }
    cout<<j<<endl;
  return 0;
}
