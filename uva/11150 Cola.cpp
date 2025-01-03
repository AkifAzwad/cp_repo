#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int main()
{
    int n;
    int rem,ans;
    while(cin>>n){

    ans=n;
    while(n>=3)
    {
        rem=n%3;
        n=n/3;
        ans+=n;
        n+=rem;
    }
    if(n==2)
    {
        ans++;
    }
    cout<<ans<<"\n";
    }
  return 0;
}
