#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int a[3012],b[3012];
    int i,j,n,sum;

    while(cin>>n)
  {

    for(i=0,j=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0)
        {
            b[j++]=fabs(a[i]-a[i-1]);
        }
    }
    sort(b,b+n-1);
    for(i=0;i<n-1;i++)
    {
        if(b[i]!=i+1)
        {
            printf("Not jolly\n");
            break;
        }
    }

    if(i==n-1)
    {
        printf("Jolly\n");
    }
   }
  return 0;
}
