#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,j=1;
    char s[20];
    char n[]="Hajj";
    char x[]="*";
    while(1)
    {

    gets(s);
    a=strcmp(s,x);
    if(a==0)
    {
        break;
    }
    i=strcmp(s,n);
    if(i==0)
    {
        printf("Case %d: Hajj-e-Akbar\n",j++);
    }
    else
        printf("Case %d: Hajj-e-Asghar\n",j++);
    }
  return 0;
}
