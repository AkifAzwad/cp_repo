#include<stdio.h>
#include<string.h>

const double PI=acos(-1.0);

int main()
{
    int i,j,len1,len2;
    char s1[105],s2[105];
    int temp,k=1,t,n=27;
    int a[27],b[27];

    scanf("%d",&t);
    getchar();
    while(t--){
                memset(a, 0, n*sizeof(a[0]));
                memset(b, 0, n*sizeof(b[0]));
    gets(s1);
    gets(s2);

        for(i=0;s1[i]!='\0';i++)
        {
            if((s1[i]>='a'&&s1[i]<='z')||(s1[i]>='A'&&s1[i]<='Z'))
            {
               if(s1[i]<97)      {temp=s1[i];a[temp-64]++;}
               else if(s1[i]>96) {temp=s1[i];a[temp-96]++;}
            }
        }
         for(j=0;s2[j]!='\0';j++)
        {
            if((s2[j]>='a'&&s2[j]<='z')||(s2[j]>='A'&&s2[j]<='Z'))
            {
               if(s2[j]<97)      {temp=s2[j];b[temp-64]++;}
               else if(s2[j]>96) {temp=s2[j];b[temp-96]++;}
            }
        }
        for(i=1;i<27;i++)
        {
            if(a[i]!=b[i])
            {
                  printf("Case %d: No\n",k++);
                break;
            }
        }
        if(i==27){printf("Case %d: Yes\n",k++);}
    }
      return 0;
}
