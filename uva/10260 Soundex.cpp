#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i;
    char s[25];

    while(gets(s)){
    for(i=0;s[i];i++)
    {

        {
            if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
            {
                if(!(s[i-1]=='B'||s[i-1]=='F'||s[i-1]=='P'||s[i-1]=='V'))printf("1");
            }
            if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
            {
                if(!(s[i-1]=='C'||s[i-1]=='G'||s[i-1]=='J'||s[i-1]=='K'||s[i-1]=='Q'||s[i-1]=='S'||s[i-1]=='X'||s[i-1]=='Z'))printf("2");
            }
            if(s[i]=='D'||s[i]=='T')
            {
                if(!(s[i-1]=='D'||s[i-1]=='T'))printf("3");
            }
            if(s[i]=='L')
            {
                if(!(s[i-1]=='L'))printf("4");
            }
            if(s[i]=='M'||s[i]=='N')
            {
                 if(!(s[i-1]=='M'||s[i-1]=='N'))printf("5");
            }
            if(s[i]=='R')
            {
                 if(!(s[i-1]=='R'))printf("6");
            }
        }
    }
printf("\n");
    }
  return 0;
}
