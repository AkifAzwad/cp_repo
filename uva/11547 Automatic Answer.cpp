#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{

    int n;
    int ans;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=(n*567)/9;
        ans+=7492;
        ans*=235;
        ans/=47;
        ans-=498;
        if(ans<0)
        {
            ans/=10;
            ans*=-1;
            ans%=10;
        }
        else
        {
            ans=(ans/10)%10;
        }
        cout<<ans<<"\n";

    }
  return 0;
}
