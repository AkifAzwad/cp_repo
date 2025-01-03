#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    double a,u,v,t,s;
    int x,j=1;
    while(1){
            cin>>x;
    if(x==0)break;
    else if(x==1)
    {
        cin>>u>>v>>t;
        a=(v-u)/t;
        s=((v*v)-(u*u))/(2*a);
        printf("Case %d: %0.3lf %0.3lf\n",j++,s,a);
    }
    else if(x==2)
    {
        cin>>u>>v>>a;
        t=(v-u)/a;
        s=(v*v-u*u)/(2*a);
        printf("Case %d: %0.3lf %0.3lf\n",j++,s,t);
    }
    else if(x==3)
    {
        cin>>u>>a>>s;
        v=sqrt((u*u)+2*a*s);
        t=(v-u)/a;
        printf("Case %d: %0.3lf %0.3lf\n",j++,v,t);
    }
    else
    {
        cin>>v>>a>>s;
        u=sqrt((v*v)-2*a*s);
        t=(v-u)/a;
        printf("Case %d: %0.3lf %0.3lf\n",j++,u,t);
    }

    }
  return 0;
}
