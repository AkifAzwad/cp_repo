#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,count;
    int a,b;
    int c;
    while(1)
    {
    scanf("%d%d",&a,&b);
    if(a==0&&b==0)
    {
        break;
    }
    for(count=0,i=a;i<=b;i++)
    {
        c=sqrt(i);
        if(c*c==i)
        {
            count++;
        }
    }
    printf("%d\n",count);
    }
  return 0;
}
