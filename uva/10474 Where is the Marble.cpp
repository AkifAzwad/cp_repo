#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,t=1;
    int n,q,x;

    while(1){
    cin>>n>>q;
    if(n==0&&q==0)break;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+i);
    printf("CASE# %d:\n",t++);
    for(j=0;j<q;j++)
    {
        cin>>x;
        for(i=0;i<n;i++)
        {
            if(x==a[i])
            {
                printf("%d found at %d\n",x,i+1);
                break;
            }
        }
        if(i==n)
        {
          printf("%d not found\n",x);
        }
    }

    }
  return 0;
}
