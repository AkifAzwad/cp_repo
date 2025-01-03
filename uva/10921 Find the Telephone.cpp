#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,n;
    char s[100];
    while(gets(s)){
    for(i=0;s[i];i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
        if(s[i]>='A'&&s[i]<='C')
        {
            printf("2");
        }
        if(s[i]>='D'&&s[i]<='F')
        {
            printf("3");
        }
        if(s[i]>='G'&&s[i]<='I')
        {
            printf("4");
        }
        if(s[i]>='J'&&s[i]<='L')
        {
            printf("5");
        }
        if(s[i]>='M'&&s[i]<='O')
        {
            printf("6");
        }
        if(s[i]>='P'&&s[i]<='S')
        {
            printf("7");
        }
        if(s[i]>='T'&&s[i]<='V')
        {
            printf("8");
        }
        if(s[i]>='W'&&s[i]<='Z')
        {
            printf("9");
        }
    }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
    }
  return 0;
}
