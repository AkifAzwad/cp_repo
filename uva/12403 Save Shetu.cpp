#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int main()
{
    int t;
    int k;
    int ans=0;
    char s1[]="donate";
    char s2[]="report";
    char s3[10];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s3);
        if(strcmp(s1,s3)==0)
        {
            cin>>k;
            ans+=k;
        }
        else
        {
            cout<<ans<<"\n";
        }
    }
  return 0;
}
