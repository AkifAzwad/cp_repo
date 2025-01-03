#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    double n,r,y;
    double s,a,p,ans;
    while(cin>>r>>n){
    y=360/(2*n);
    y=(y*PI)/180;
    s=r*sin(y);
    a=(r*r)-(s*s);
    a=sqrt(a);
    p=2*s*n;
    ans=(a*p)/2;
    printf("%0.3lf\n",ans);
    }
  return 0;
}
