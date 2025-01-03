#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int t,i=1;
    double d,u,v;
    double r,q,s;
    double ans,t1,t2;
    cin>>t;
    while(t--){
    cin>>d>>v>>u;
    if(u-v<=0)
    {
        printf("Case %d: can't determine\n",i++);
    }
    else{
    r=sqrt(u*u-v*v);
    t1=d/r;
    t2=d/u;
    ans=fabs(t1-t2);
    if(ans==0)
    {
        printf("Case %d: can't determine\n",i++);
    }
    else
    printf("Case %d: %0.3lf\n",i++,ans);
    }
    }
  return 0;
}
