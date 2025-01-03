#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int t,ans,k=1;
    int m,n;
    cin>>t;
    while(t--){
    cin>>m>>n;
    ans=((fabs(m-n)+m)*4)+19;
    printf("Case %d: %d\n",k++,ans);
    }
  return 0;
}
