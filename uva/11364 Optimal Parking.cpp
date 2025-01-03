#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,ans,t,n;
    cin>>t;
    while(t--){
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+i);
    ans=a[n-1]-a[0];
    cout<<ans*2<<"\n";
    }
  return 0;
}
