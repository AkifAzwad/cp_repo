#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x,l;
    char s[10004];
    while(gets(s))
    {
        l=strlen(s);
    for(n=0,i=0;i<l;i++)
    {
        if(isalpha(s[i])&&!isalpha(s[i+1]))
        {
            n++;
        }
    }

    cout<<n<<"\n";
    }
  return 0;
}
