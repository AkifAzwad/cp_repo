#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int nod(int n){
    int i,ans;
for(ans=0,i=2;i*i<=n;i++)
    {
        if(n%i==0){
        if(n/i==i) ans++;
        else ans+=2;
        }
    }
    return ++ans;
}
int main()
{
    int i,n,j,k,t;
    int a[1005],b[1005];
    a[1]=1;
    for(i=2;i<=1000;i++)
    {
        a[i]=nod(i)+1;
    }

    for(k=i=1;i<=32;i++)
    {
        for(j=1000;j!=0;j--)
        {
            if(a[j]==i)
            {
                b[k++]=j;;
            }
        }
    }
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
    printf("Case %d: %d\n",i,b[n]);
  }
  return 0;
}
