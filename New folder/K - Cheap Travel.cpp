#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int n,m,a,b;
    int ans,ans1,ans2,ans3;
    cin>>n>>m>>a>>b;
    ans1=(n*a);
    ans2=((n/m)*b)+((n%m)*a);
    ans3=((n/m)*b);
    if((n%m)!=0)ans3+=b;
    ans=min(ans1,ans2);
    ans=min(ans,ans3);
    cout<<ans<<endl;
  return 0;
}
