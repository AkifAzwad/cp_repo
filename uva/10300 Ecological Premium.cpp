#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int t,f;
    double ans,a,n,e,s;
    cin>>t;
    while(t--){
    cin>>f;
    ans=0;
    while(f--)
    {
    cin>>a>>n>>e;
    s=a/n;
    ans+=s*n*e;
    }
    cout<<ans<<"\n";
    }
  return 0;
}
