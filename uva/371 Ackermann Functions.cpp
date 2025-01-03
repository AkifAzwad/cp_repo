#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,n,x,temp;
    long long l,h,v;
    long long ans;
    while(1){
        scanf("%lld%lld",&l,&h);
        if(l==0&&h==0)
        {
            break;
        }
        if(l>h)
        {
            temp=h;
            h=l;
            l=temp;
        }
    ans=0;
    for(x=l;x<=h;x++){
    for(n=x,i=0;;i++)
    {

        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=(3*n)+1;
        }
        if(n==1)
        {
            i++;
            break;
        }
    }
    if(i>ans)
    {
        ans=i;
        v=x;
    }


    }
    printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,v,ans);
    }
  return 0;
}
