#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int t;
    int n,p,q;
    int i,j,sum;
    int a[35];
    cin>>t;
    for(j=1;j<=t;j++){
    cin>>n>>p>>q;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(sum=i=0;;i++)
    {
        sum+=a[i];
     if((i+1>n||i+1>p||sum>q))
        {
            break;
        }

    }
    printf("Case %d: %d\n",j,i);
    }
  return 0;
}
