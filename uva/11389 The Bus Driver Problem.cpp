#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int n,d,r,i,sum;
    while(1){
    cin>>n>>d>>r;
    if(n==0&&d==0&&r==0)break;
    int m[n],e[n];
    for(i=0;i<n;i++)
    {
        cin>>m[i];
    }
        for(i=0;i<n;i++)
    {
        cin>>e[i];
    }
    sort(m,m+i);
    sort(e,e+i,greater<int>());
        for(sum=i=0;i<n;i++)
    {
        if(m[i]+e[i]>d)
        {
            sum+=(m[i]+e[i])-d;
        }
    }
    cout<<sum*r<<"\n";
}
  return 0;
}
