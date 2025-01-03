#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k=1;
    int n,t;
   cin>>t;
   while(t--)
   {
    cin>>n;
    for(j=0;n!=0;)
    {
        i=n%2;
        n=n/2;
        if(i==1)j++;
    }
    if(j%2!=0)printf("Case %d: odd\n",k++);
    else printf("Case %d: even\n",k++);
}
  return 0;
}
