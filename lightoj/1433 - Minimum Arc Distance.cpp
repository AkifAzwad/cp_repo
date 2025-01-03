#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int k=1,t;
    double o1,o2,a1,a2,b1,b2;
    double ans,s,r,x,y;
    cin>>t;
    while(t--){
    cin>>o1>>o2>>a1>>a2>>b1>>b2;
    ans=0.0;
    s=(((a1-b1)*(a1-b1))+((a2-b2)*(a2-b2)));
    s=sqrt(s);
    r=(((o1-b1)*(o1-b1))+((o2-b2)*(o2-b2)));
    r=sqrt(r);
    x=2*asin(s/(2*r));
    y=(x*180)/PI;

     if(y>180)
    {
        y=360-y;
        x=(y*PI)/180;
        ans=x*r;
    }
    else ans=x*r;
    printf("Case %d: %lf\n",k++,ans);
    }
  return 0;
}
