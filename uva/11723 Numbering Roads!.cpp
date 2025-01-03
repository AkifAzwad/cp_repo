#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int j=1,r,n;
    int mod,ans;
    while(1){
    cin>>r>>n;
    if(r==0&&n==0)
    {
        break;
    }
    ans=r/n;
    mod=r%n;
    if(ans<=26)
    {
        if(mod==0)
        {
            ans--;
        }
       printf("Case %d: %d\n",j++,ans);
    }
    else
    {
        printf("Case %d: impossible\n",j++);
    }
}
  return 0;
}
