#include<stdio.h>
#include<string.h>

int main()
{
    int l1,l2;
    int i,j,k,n;
    char s1[25],s2[25];
    char temp1[25],temp2[25];
    scanf("%d",&n);
    while(n--){
    scanf("%s",s1);
    scanf("%s",s2);
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1==l2)
    {
        for(k=j=i=0;i<l1;i++)
        {
        if(s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u')
        {
                temp1[j++]=s1[i];
        }
        if(s2[i]!='a'&&s2[i]!='e'&&s2[i]!='i'&&s2[i]!='o'&&s2[i]!='u')
        {
                temp2[k++]=s2[i];
        }

    }
    temp1[j]='\0';
    temp2[k]='\0';
    if(strcmp(temp1,temp2)==0)
        {

            printf("Yes\n");
        }
        else
        {

         printf("No\n");
        }
    }
    else
    {
        printf("No\n");
    }
}
    return 0;

}
