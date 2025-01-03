#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int t;
    int n,i,x,y;
    int max,dif;
    cin>>t;
    while(t--){
    cin>>n;
    cin>>x;
    max=x;

    for(dif=-9999999,i=1;i<n;i++)
    {
        cin>>x;
        y=max-x;
        if(y>dif)dif=y;
        if(x>max)max=x;
    }
    cout<<dif<<"\n";
    }
  return 0;
}
