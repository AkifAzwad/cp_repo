#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int sod(int n)
{
    int s;
    for(s=0;n;)
    {
        s+=n%10;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,i,j,sum;
    char a[1006];
    char b[1006];
    while(1){
        scanf("%s",&a);
        n=strcmp(a,"0");
        if(n==0)
        {
            break;
        }
    strcpy(b,a);
    for(sum=i=0;a[i];i++)
    {
        a[i]=a[i]-'0';
        if(i%2==0)sum+=(-1*a[i]);
        else sum+=a[i];
    }
    if(!(sum%11))printf("%s is a multiple of 11.\n",b);
    else printf("%s is not a multiple of 11.\n",b);
}
  return 0;
}
