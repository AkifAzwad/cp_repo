#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int a,b,c;
    int t,k=1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a*a+b*b==c*c)||(c*c+b*b==a*a)||(a*a+c*c==b*b))
        {
            printf("Case %d: yes\n",k++);
        }
        else printf("Case %d: no\n",k++);
    }
  return 0;
}
