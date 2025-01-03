#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int h1,h2,m1,m2;
    int ans;
    while(1){
        cin>>h1>>m1>>h2>>m2;
    if(h1==0&&h2==0&&m1==0&&m2==0)break;
    if(h1==0)h1=24;
    if(h2==0)h2=24;
    ans=((h2*60)+m2)-((h1*60)+m1);
    if(ans<0)
    {
        ans=24*60+ans;
    }
    cout<<ans<<"\n";
    }
  return 0;
}
