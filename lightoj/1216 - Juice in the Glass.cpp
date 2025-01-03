#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    double r,r1,r2,h,p,x,y,z,ans;
    int i,j,k=1,t;
    cin>>t;
    while(t--){
    cin>>r1>>r2>>h>>p;
    x=(r1-r2);
    y=atan(h/x);
    z=(h-p)/tan(y);
    r=r1-z;
    ans=(PI*p*((r*r)+(r2*r2)+(r*r2)))/3;

    printf("Case %d: %lf\n",k++,ans);
}
  return 0;
}
