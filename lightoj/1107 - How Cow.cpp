#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int t,a,b;;
    int x1,y1,x2,y2;
    int i,n,k=1;
    cin>>t;
    while(t--){
    cin>>x1>>y1>>x2>>y2;
    cin>>n;
    printf("Case %d:\n",k++);
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if((a>=x1&&a<=x2)&&(b>=y1&&b<=y2))
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    }
  return 0;
}
