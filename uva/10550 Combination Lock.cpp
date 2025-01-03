#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int a,b,c,d;
    int ans;
    int x,y,z;
    while(1){
        cin>>d>>a>>b>>c;
    if(d==0&&a==0&&b==0&&c==0)
    {
        break;
    }
    if(d==0)d=40;
    if(a==0)a=40;
    if(b==0)b=40;
    if(c==0)c=40;
    x=d-a;
    if(x<0)
    {
        x+=40;
    }
    y=b-a;
    if(y<0)
    {
        y+=40;
    }
    z=b-c;
    if(z<0)
    {
        z+=40;
    }
    ans=120+x+y+z;
    cout<<ans*9<<"\n";
    }
  return 0;
}
