#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int n,t;
    long long i,x,y,z;
    cin>>t;
    while(t--){
    scanf("%d",&n);

    for(y=z=i=0;i<n;i++)
    {
        scanf("%lld",&x);
       if(x>=0){y++;}
       if(x<0){z++;}
    }
    printf("%lld",max(y,z));
    if(z==0)printf(" %lld\n",y);
    else if(y==0)printf(" %lld\n",z);
    else if(x!=0&&y!=0)printf(" %lld\n",min(y,z));
    }
  return 0;
}
