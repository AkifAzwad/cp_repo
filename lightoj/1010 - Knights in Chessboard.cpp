#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k=1,t,m,n;
    int ans;
    cin>>t;
    while(t--){
    cin>>m>>n;
    if(m==1||n==1)
    {
        ans=max(m,n);
    }
    else if(m%2==0&&n%2==0)
    {
        ans=(m*n)/8;
        ans=(4*ans)+((m*n)%8);
    }
    else
    {
        if(m%2!=0&&n%2!=0)
        {
            ans=(m*n)/6;
        ans=(3*ans)+((m*n)%6);
        }
        else{
        ans=(m*n)/6;
        ans=(3*ans)+((m*n)%6)-1;
    }
    }
    printf("Case %d: %d\n",k++,ans);
    }
  return 0;
}
