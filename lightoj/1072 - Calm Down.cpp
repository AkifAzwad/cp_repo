#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,t;
    double R,n,r,v;
    cin>>t;
    for(i=1;i<=t;i++){
    cin>>R>>n;
    v=sin(PI/n);
    r=(R*v)/(1+v);
    printf("Case %d: %lf\n",i,r);
    }
  return 0;
}
