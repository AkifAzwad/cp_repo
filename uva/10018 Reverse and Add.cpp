#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
long long rev(long long y)
{long long m,n;
for(m=0;y!=0;)
    {
        m*=10;
        n=y%10;
        y/=10;
        m=m+n;
    }
    return m;
}
int main()
{
    int t;
    long long n,m;
    long long i,j,x,y;
    cin>>t;
    while(t--){
    cin>>x;
    for(i=0;i<1000;i++)
    {
    y=rev(x);
    x+=y;
    j=rev(x);

    if(j==x)
    {
        i++;
        break;
    }
    }

    cout<<i<<" "<<j<<"\n";
    }
  return 0;
}
