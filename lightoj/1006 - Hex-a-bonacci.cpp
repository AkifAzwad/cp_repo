#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,n,t,k=1;
    int a,b,c,d,e,f;
    cin>>t;
    while(t--){
    cin>>a>>b>>c>>d>>e>>f>>n;
    double x[n];
    x[0]=a;
    x[1]=b;
    x[2]=c;
    x[3]=d;
    x[4]=e;
    x[5]=f;
    for(i=6;i<=n;i++)
    {
        x[i]=x[i-1]+x[i-2]+x[i-3]+x[i-4]+x[i-5]+x[i-6];
    }
        printf("Case %d: %0.0lf\n",k++,x[n]%10000007);
    }
  return 0;
}
