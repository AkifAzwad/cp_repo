#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
 int q,i,l,n,m,t;
 char s[10005];
 scanf("%d",&t);
 getchar();
 while(t--)
 {

 gets(s);
 l=strlen(s);

 n=sqrt(l);
 if(n*n!=l)
 {
     printf("INVALID\n");
 }
 else{
 for(q=1,i=m=0;q<=l;q++)
       {
     printf("%c",s[i]);
     if(q%n==0)
     {

        m++;
        i=m;
    }
     else
     {
         i+=n;
     }
       }
       printf("\n");
     }

 }
 return 0;
}
