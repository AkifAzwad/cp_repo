#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int t;
    int n,k,p;
    int ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>k>>p;
        ans=k+p;
        if(ans>n)
        {
            ans=ans-(ans/n)*n;
        }
        if(ans==0)
        {
            ans=n;
        }
            cout<<"Case "<<i<<": "<<ans<<"\n";
    }
  return 0;
}
