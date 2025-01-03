#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int t,k=1;
    int i,m,n,x;
    string s;
    string s1="donate";
    string s2="report";
    cin>>t;
    while(t--)
    {
        cin>>n;
        printf("Case %d:\n",k++);
        for(m=0,i=1;i<=n;i++){
        cin>>s;
        if(s==s1){scanf("%d",&x);m+=x;}
        else if(s==s2){printf("%d\n",m);}
        }
    }
  return 0;
}
