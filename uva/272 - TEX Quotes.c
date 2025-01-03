#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    int i,n=0,l;
    while(gets(s)){
    l=strlen(s);

    for(i=0;i<l;i++)
    {

        if(s[i]=='"')
        {
            if(n%2==0){printf("``");n++;}
            else {printf("''");n++;}
        }

        else printf("%c",s[i]);
    }
    printf("\n");
    }
  return 0;
}
