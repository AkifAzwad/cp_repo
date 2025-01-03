#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,m,n,l;
    char x[100000],y[100000];

    while(scanf("%s %s",x,y)==2)
    {
    l=strlen(x);
    for(j=i=0;y[i]!='\0';i++)
    {
        if(x[j]==y[i])j++;
    }
   if(j==l)printf("Yes\n");
   else printf("No\n");

    }
    return 0;
}

