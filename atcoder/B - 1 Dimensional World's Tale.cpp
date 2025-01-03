#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k;
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int a[n+1],b[m+1];
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<m;i++)cin>>b[i];

    a[n]=x;b[m]=y;
    sort(a,a+n+1);
    sort(b,b+m+1);

    if(b[0]>a[n])cout<<"No War\n";
    else cout<<"War\n";
  return 0;
}
