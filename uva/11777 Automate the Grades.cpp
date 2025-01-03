#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int main()
{
    int t;
    int i,j;
    int m,n,x;
    int a[3];
    int ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(j=ans=0,m=1;m<=7;m++)
        {
            if(m<5)
            {
                cin>>x;
                ans+=x;
            }
            else
                cin>>a[j++];
        }
        sort(a,a+3);
        n=(a[2]+a[1])/2;
        ans+=n;
         if(ans>=90)
         {
             printf("Case %d: A\n",i);
         }
        else if(ans>=80&&ans<90)
        {
             printf("Case %d: B\n",i);
        }
        else if(ans>=70&&ans<80)
        {
             printf("Case %d: C\n",i);
        }
        else if(ans>=60&&ans<70)
        {
             printf("Case %d: D\n",i);
        }
        else
        {
             printf("Case %d: F\n",i);
        }
    }
  return 0;
}
