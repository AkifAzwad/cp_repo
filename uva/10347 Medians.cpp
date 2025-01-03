#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    double ans,s,x,y,z;
    while(cin>>x>>y>>z){
    if(x<=0.0||y<=0.0||z<=0.0)
    {
        printf("-1.000\n");
        continue;
    }

    else
    {
        s=(x+y+z)/2;
        ans=(s*(s-x)*(s-y)*(s-z));
        if(ans<=0.0)
        {
            cout<<"-1.000"<<"\n";
        }

        else
        {
            ans=sqrt(ans);
            ans=(4*ans)/3;
            printf("%0.3lf\n",ans);
        }
    }
    }
  return 0;
}

