#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int t,i,j,k;
    int m,n,sum;
    int x[35],y[35],ans[35];
   while(cin>>n>>m){
        memset(x,0,sizeof x);
        memset(y,0,sizeof y);
        memset(ans,0,sizeof ans);

    for(i=0;;i++)
    {
        x[i]=n%2;
        n=n/2;
        if(n==0)
        {
            break;
        }
    }

    for(j=0;;j++)
    {
        y[j]=m%2;
        m=m/2;
        if(m==0)
        {
            break;
        }
    }

    if(i>j)k=i;
    else k=j;
    for(i=0;i<=k;i++)
    {
        if(x[i]==1&&y[i]==1)
        {
            ans[i]=0;

        }
        else if(x[i]==0&&y[i]==0)
        {
            ans[i]=0;

        }
        else
        {
            ans[i]=1;

        }

    }
    for(sum=0,i=0;i<=k;i++)
    {
        if(ans[i]!=0)
        {
            sum+=pow(2,i);
        }


    }

    cout<<sum<<"\n";

   }
  return 0;
}
