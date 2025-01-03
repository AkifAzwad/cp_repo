#include<stdio.h>
#include<string.h>
int main()
{
    int t,a,n,i,j=1,p,m;
    char ch[105];
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    scanf("%s",ch);


    for(a=i=m=p=0;i<n;i++)
    {

        if(ch[i]=='.')p++;
       if(ch[i]=='#'&&p!=0)m++;

        if((m+p)==3)
        {
            a++;
              m=p=0;
              }
    }
    if(p!=0)a++;

    printf("Case %d: %d\n",j++,a);
    }
    return 0;
}
