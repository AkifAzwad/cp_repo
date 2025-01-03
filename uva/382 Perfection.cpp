#include<bits/stdc++.h>
using namespace std;
const double PI=acos(-1.0);
int sod(int n){
    int i,ans;
    if(n==1)
    {
        return 0;
    }
    else{
for(ans=0,i=2;i*i<=n;i++)
    {
        if(n%i==0){
        if(n/i==i) ans+=i;
        else ans+=((n/i)+i);
        }
    }
    return ++ans;
    }
}
int main()
{
    int i,j;
    int n,x;
    int ans;
    printf("PERFECTION OUTPUT\n");
    while(1){
    cin>>n;
    if(n==0)
    {
        printf("END OF OUTPUT\n");
        break;
    }
    if(sod(n)==n)
    {
        printf("%5d  PERFECT\n",n);
    }
    else if(sod(n)>n)
    {
        printf("%5d  ABUNDANT\n",n);
    }
    else
    {
        printf("%5d  DEFICIENT\n",n);
    }

    }
  return 0;
}
