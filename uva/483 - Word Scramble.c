#include<stdio.h>
#include<string.h>

const double PI=acos(-1.0);

int main()
{
    int i,m;
    char s[10000],temp[10000];
    while(gets(s)){
    for(m=i=0;s[i];i++)
    {
         if(s[i]==' ')
        {
            temp[m]='\0';
            strrev(temp);
            printf("%s ",temp);
            m=0;
        }
        else{
        temp[m++]=s[i];
        }
    }
    temp[m]='\0';
    strrev(temp);
    printf("%s",temp);
    printf("\n");
    }
  return 0;
}
