#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int t;
    double a,ans,i,j,k;
    cin>>t;
    while(t--){
    cin>>i>>j>>k;
    ans=(i+j)/3;
    a=((i-ans)*k)/ans;
    if(a<0)
    {
        a=0;
    }
    printf("%0.0lf\n",a);
    }
  return 0;
}
