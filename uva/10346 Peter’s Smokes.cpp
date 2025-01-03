#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int main()
{
    int n,k;
    int rem,ans;
    while(cin>>n>>k){
    rem=n;
    ans=0;
    while(rem>=k)
    {
        ans+=(rem/k)*k;
        rem=(rem/k)+(rem%k);
    }
    ans+=rem;
    cout<<ans<<"\n";
    }
  return 0;
}
