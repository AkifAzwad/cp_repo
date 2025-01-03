#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int x,y,z;
    int n,t,k=1;
    cin>>t;
    while(t--){
    cin>>z;
    for(y=0,n=z;n!=0;)
    {
        x=n%10;
        n/=10;
        y=(y*10)+x;
    }
    if(y==z)printf("Case %d: Yes\n",k++);
    else printf("Case %d: No\n",k++);
    }
  return 0;
}
