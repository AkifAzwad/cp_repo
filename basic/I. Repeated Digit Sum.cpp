#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
ll power(ll a,ll b,ll m)
{
    ll ret;
    if(b==0)return 1;

    if((b&1)==1)
    {
       return ((power(a,b-1,m))*(a%m))%m;
    }
    else {
            ret=power(a,b/2,m);
            return ((ret%m)*(ret%m))%m;
    }
}
int main()
{
    int t,k=1;
    ll i,a,b,ans;
    scanf("%d",&t);
    while(t--){
    scanf("%lld%lld",&a,&b);

    ans=power(a,b,9);
    if(ans%9==0)
    {
        printf("Case %d: 9\n",k++);
    }
    else printf("Case %d: %lld\n",k++,ans%9);
    }
  return 0;
}
