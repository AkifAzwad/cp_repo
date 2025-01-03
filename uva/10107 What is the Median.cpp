#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    long i=0,n,m;
    long a[10000];
    while(cin>>n)
    {
        a[i++]=n;
        sort(a,a+i);
        m=i/2;
        if(i%2!=0)cout<<a[m]<<"\n";
        else cout<<(a[m]+a[m-1])/2<<"\n";
    }
  return 0;
}
