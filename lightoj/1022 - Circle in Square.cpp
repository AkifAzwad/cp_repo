#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int t,k=1;
    double r,ans;
    cin>>t;
    while(t--){
    cin>>r;
    ans=r*r*(4-PI);
    printf("Case %d: %0.2lf\n",k++,ans);
    }
      return 0;
}
