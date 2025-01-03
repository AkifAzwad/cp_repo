#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int x,t,n,i,j,k;
    cin>>t;
    for(x=1;x<=t;x++){
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=k=i=0;i<n;i++)
    {
        j+=((a[i]/30)+1)*10;
        k+=((a[i]/60)+1)*15;
    }
    if(j<k)printf("Case %d: Mile %d\n",x,j);
    else if(k<j)printf("Case %d: Juice %d\n",x,k);
    else printf("Case %d: Mile Juice %d\n",x,k);
    }
  return 0;
}
