#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int t,j=1;
    int l,b,h;
    cin>>t;
    while(t--){
    cin>>l>>b>>h;
    if(l>20||b>20||h>20)printf("Case %d: bad\n",j++);
    else printf("Case %d: good\n",j++);
    }
  return 0;
}
