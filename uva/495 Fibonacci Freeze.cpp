#include<bits/stdc++.h>
using namespace std;
long long a[5000];

long long f(long long n)
{
    if(n<2)
    {
        return n;
    }
    if(a[n]!=-1){
        return a[n];
    }
else
   a[n]=f(n-1)+f(n-2);
    return a[n];

}

int main()
{
    long long n,i;

    while(scanf("%lld",&n)!=EOF){
     memset(a,-1,5000*sizeof(a[0]));
    printf("The Fibonacci number for %d is %lld\n",n,f(n));
    }
  return 0;
}
