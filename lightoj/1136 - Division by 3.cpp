#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int x[2147483647];
int main()
{
    int i,j,k=1,sum,count;
    int a,b,t,ans;
    for(sum=0,i=1;i<=2147483647;i++)
    {
        sum+=i;
        if(sum%3==0)x[i]=x[i-1]+1;
        else x[i]=x[i-1];
    }
    cin>>t;
    while(t--){
    cin>>a>>b;
    //count=0;
    /*for(sum=0,i=1;i<=a;i++)
    {
        sum+=i;
    }*/
    //if(sum%3==0)count++;
    ans=x[b]-x[a];
    if(x[a]>x[a-1])ans++;
    printf("Case %d: %d\n",k++,ans);
}
        return 0;
}
