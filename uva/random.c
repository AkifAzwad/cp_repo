#include <stdio.h>
int main()
{
    int i;
    char s[100];
    gets(s);
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            s[i]-=32;
            printf("%c",s[i]);
        }
    }
    printf("\n");
    return 0;
}
