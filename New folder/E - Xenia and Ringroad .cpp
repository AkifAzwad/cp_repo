#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    long long n,m;
    long long count,pos,i,j,k;
    cin>>n>>m;
    long long a[m];
    for(i=0;i<m;i++)cin>>a[i];

    pos=1;count=0;
    for(i=0;i<m;i++)
    {
        if(pos<=a[i])
        {
            count+=a[i]-pos;
            pos=a[i];
        }
        else
        {
            count+=n-pos;
            pos=0;
            count+=a[i]-pos;
            pos=a[i];
        }

    }
  cout<<count<<endl;
  return 0;
}
