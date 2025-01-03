#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
   char s[105];
   int i,j,len,count;
   cin>>s;
   len=strlen(s);
    for(count=i=0;s[i];i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            count++;
        }
    }
    if(len==count)
    {
        for(i=0;s[i];i++)s[i]+=32;

       cout<<s<<endl;
    }
    else if(len-1==count&&s[0]>='a'&&s[0]<='z')
    {
        s[0]-=32;
        for(i=1;s[i];i++)s[i]+=32;

        cout<<s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
  return 0;
}
