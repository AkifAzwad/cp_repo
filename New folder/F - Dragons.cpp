#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    long long i,j,k;
    long long s,n;
    cin>>s>>n;
    long long x[n],y[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    long long bonus,change;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                swap(y[i],y[j]);
                swap(x[i],x[j]);

            }
        }
    }
    for(j=0;j<n;j++)
        {
            if(s<=x[j])
            {
                cout<<"NO\n";
                break;
            }
            s+=y[j];

        }
        if(j==n)cout<<"YES\n";

  return 0;
}
