#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int x,k=1;
    double v1,v2,v3,a1,a2,d,t,t1,t2,ans;
    cin>>x;
    while(x--){
    cin>>v1>>v2>>v3>>a1>>a2;
    t1=(v1/a1);
    t2=(v2/a2);
    t=max(t1,t2);
    d=((v1*v1)/(2*a1))+((v2*v2)/(2*a2));
    ans=v3*t;
   printf("Case %d: %lf %lf\n",k++,d,ans);
    }
      return 0;
}
