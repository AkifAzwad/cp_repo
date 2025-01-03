#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int main()
{
    int n;
    int ans,rem,temp;
    int I,T;
    int st;
    char str[106];
    cin>>T;
    getchar();
    for(st=1;st<=T;st++)
    {
        gets(str);
        for(ans=0,I=0;str[I]!='\0';I++)
        {
            if(str[I]==' ')
            {
                ans+=1;
            }
           else if(str[I]=='s'||str[I]=='z')
            {
                ans+=4;
            }
           else{
                if(str[I]>114)
            {
                rem=str[I]-97;
                temp=rem%3;
            }
            else{
            rem=str[I]-96;
            temp=rem%3;
            }
            if(temp==0)
            {
                n=rem/3;
                ans+=(n*3-((n-1)*3));
            }
            else
            {
                ans+=temp;
            }
           }
        }
        printf("Case #%d: %d\n",st,ans);
    }
  return 0;
}

