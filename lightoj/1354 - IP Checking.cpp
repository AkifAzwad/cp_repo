#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int a[4],b[4];
    int i,j,v,n,w,k=1;
    int t;
    cin>>t;
    while(t--){
    scanf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]);
    scanf("%d.%d.%d.%d",&b[0],&b[1],&b[2],&b[3]);
    for(j=0;j<4;j++)
        {
    for(i=0,v=0,n=b[j];n!=0;i++)
    {
        w=n%10;
        n=n/10;
        if(w==1)
       {
            v=v+pow(2,i);
       }
    }
        if(v!=a[j])
        {
            printf("Case %d: No\n",k++);
            break;
        }
    }
    if(j==4)printf("Case %d: Yes\n",k++);
    }
  return 0;
}
