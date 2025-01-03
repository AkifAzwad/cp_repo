#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int main()
{
    int t;
    int i,j,n,x;
    int ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        ans=(n/2)+1;
        for(j=1;j<=n;j++)
        {
            cin>>x;
            if(j==ans)
            {
                ans=x;
            }
        }
        printf("Case %d: %d\n",i,ans);
    }
  return 0;
}
