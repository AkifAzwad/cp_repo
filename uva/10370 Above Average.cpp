#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    int c;
    int n,i;
    int sum,count;
    double ans,avg;
    scanf("%d",&c);
    while(c--)
        {
            sum=0,count=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=(double)sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>avg)
        {
            count++;
        }
    }

    ans=(double)count/n;
    ans=ans*100.00;
    printf("%0.3lf%%\n",ans);
    }
  return 0;
}
