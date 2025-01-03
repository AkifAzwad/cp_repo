#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i;
    while(cin>>n){
            if(n==0)break;
    long long a[n];
    a[0]=1;
    a[1]=1;
    for(i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<a[n]<<"\n";
    }
  return 0;
}
