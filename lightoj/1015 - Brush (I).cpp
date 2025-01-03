#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k=1,count;
    int n,m,t;
    cin>>t;
    while(t--){
    cin>>n;
    for(count=i=0;i<n;i++)
    {
        cin>>m;
        if(m>0)count+=m;
    }
     printf("Case %d: %d\n",k++,count);
    }
  return 0;
}
