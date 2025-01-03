#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int main()
{
    int a[50];
    int i,n,j=1;
    int ans,avg;
    int x;
   while(1)
    {
    scanf("%d",&n);
    if(n==0)
    {
        break;
    }
    for(avg=i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        avg+=a[i];
    }
    avg=avg/n;
    for(ans=i=0;i<n;i++)
    {
        x=a[i]-avg;
        if(x>0)
        {
            ans+=x;
        }
    }
    printf("Set #%d\n",j++);
    printf("The minimum number of moves is %d.\n",ans);
    printf("\n");
}
  return 0;
}
