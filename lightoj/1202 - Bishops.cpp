#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int k=1;
    int a,b;
    int n,t;
    int x,y;
    int r1,c1,r2,c2;
    cin>>t;
    while(t--){
    cin>>r1>>c1>>r2>>c2;
    x=fabs(r1-r2);
    y=fabs(c1-c2);
    if(r1%2==0)
    {
        if(c1%2==0)a=1;
        else a=0;
    }
    else if(r1%2!=0)
    {
        if(c1%2!=0)a=1;
        else a=0;
    }
    if(r2%2==0)
    {
        if(c2%2==0)b=1;
        else b=0;
    }
    else if(r2%2!=0)
    {
        if(c2%2!=0)b=1;
        else b=0;
    }
    if(x==y)printf("Case %d: 1\n",k++);
    else if(a==b)printf("Case %d: 2\n",k++);
    else printf("Case %d: impossible\n",k++);
    }
      return 0;
}
