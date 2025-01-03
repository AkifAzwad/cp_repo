#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long

int main()
{
    ll i,j,n,t;
    cin>>t;

    for(j=1;j<=t;j++){

    ll a[10000];
    double b[10000],c[10000];
    char temp;

      for(i=0;;i++)
    {
        scanf("%lld%c",&a[i],&temp);
        if(temp=='\n')
        {
            break;
        }
    }
      for(i=0;;i++)
    {
        scanf("%lf%c",&b[i],&temp);
        if(temp=='\n')
        {
            break;
        }
    }
    n=i+1;
    for(i=0;i<n;i++)
    {
        c[a[i]-1]=b[i];
    }

    for(i=0;i<n;i++){
    cout<<c[i];
    if(i<n-1)printf("\n");
    }if(j<=t-1)printf("\n\n");
    }
  return 0;
}
