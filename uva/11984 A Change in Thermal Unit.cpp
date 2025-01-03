#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    double c,d;
    double ans;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>c>>d;
        ans=((5*d)+(9*c))/9;
        printf("Case %d: %0.2lf\n",i,ans);
    }
  return 0;
}
