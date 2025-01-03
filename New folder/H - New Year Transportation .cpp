#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    long long i,j,k;
    long long n,t;
    cin>>n>>t;
    long long a[n];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;)
    {

        if(i>t)
        {
            cout<<"NO\n";
            break;
        }
        else if(i==t)
        {
            cout<<"YES\n";
            break;
        }
        i+=a[i];
    }
    if(i>n)cout<<"NO\n";
  return 0;
}
