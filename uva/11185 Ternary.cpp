#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    int a[100000];
   while(1){
    scanf("%d",&n);
    if(n<0){
        break;
    }
    for(i=0;;i++)
    {
        a[i]=n%3;
        n=n/3;
        if(n==0)
        {
            break;
        }
    }
    for(i;i>=0;i--){
    printf("%d",a[i]);
    }
printf("\n");
    }
  return 0;
}
