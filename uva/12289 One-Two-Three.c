#include <stdio.h>
#include <string.h>
int main()
{
    int i,t,count,len;
    char ch[10];
    char a[]="one";
    char b[]="two";

    scanf("%d",&t);
    while(t--){
    scanf("%s",ch);
    len=strlen(ch);
    if(len==5)printf("3\n");
    else
        {
            for(count=i=0;i<3;i++)
            {
                if(ch[i]!=a[i])count++;

            }

        if(count<=1)printf("1\n");
        else printf("2\n");
        }
    }
    return 0;
}
