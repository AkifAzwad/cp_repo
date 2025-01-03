#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,sum,sum2;
    double ans,ans2,x,y;
    char c1[30],c2[30];
    while(gets(c1))
        {
            gets(c2);

    for(sum=i=0;c1[i];i++)
    {
        if(c1[i]>='a'&&c1[i]<='z')
        {
            sum+=(c1[i]-96);
        }
        if(c1[i]>='A'&&c1[i]<='Z')
        {
            sum+=(c1[i]-64);
        }

    }
    for(sum2=i=0;c2[i];i++)
    {
        if(c2[i]>='a'&&c2[i]<='z')
        {
            sum2+=(c2[i]-96);
        }
        if(c2[i]>='A'&&c2[i]<='Z')
        {
            sum2+=(c2[i]-64);
        }

    }

    sum=sum%9;
    sum2=sum2%9;
    if(sum==0)sum=9;
    if(sum2==0)sum2=9;
    x=(double)sum;
    y=(double)sum2;
    ans=(y*100)/x;
    ans2=(x*100)/y;

    if(sum>sum2)printf("%0.2lf %%\n",ans);
      else  printf("%0.2lf %%\n",ans2);
        }
    return 0;
}
