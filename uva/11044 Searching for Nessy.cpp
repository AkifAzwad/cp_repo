#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int n,m,ans,t;
    int a,b,c,d;
    cin>>t;
    while(t--){
            cin>>n>>m;
    c=n-2;
    d=m-2;
    a=c/3;
    b=d/3;
    if(a*3<c)a++;

    if(b*3<d)b++;
    ans=a*b;

    cout<<ans<<"\n";
    }
  return 0;
}
