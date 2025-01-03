#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k=1,count;
    int n,m,t;
    int x,y,z;
    cin>>t;
    while(t--){
    cin>>n>>m;
    for(count=x=0,i=1;i<=n;i++)
    {
            if(x==0)count-=i;
            else if(x==1)count+=i;
    if(i%m==0){
                if(x==0)x=1;
                else x=0;
              }

    }
    printf("Case %d: %d\n",k++,count);
    }
  return 0;
}
