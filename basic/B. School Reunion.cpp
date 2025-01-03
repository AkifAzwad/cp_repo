#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
struct data
{
    ll a,b;
};
bool cmp(data a,data b)
{
    if(a.a>b.a)return 0;
    else return 1;
}
int main()
{
    ll i,j,k=1,t;
    ll x,y,z;
    ll n,p;
    cin>>t;
    while(t--){
    cin>>n>>p;
    data d[n];
    ll a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>d[i].a>>d[i].b;
    }
    sort(d,d+n,cmp);
    for(i=0;i<n;i++)
    {
        a[i]=d[i].a;
        b[i]=d[i].b;
    }
    ll *p1,*q1,*p2,*q2;
    for(x=b[n-1],i=0;i+p<=n;i++)
    {
        p1=max_element(a+i,a+i+p);
        q1=min_element(b+i,b+i+p);
        p2=min_element(a+i,a+i+p);
        q2=max_element(b+i,b+i+p);
        p1=min(p1,q1);
        q1=max(p2,q2);
        cout<<*p1<<" "<<*q1<<endl;
        if(abs(*p1-*q1)<x)x=abs(*p1-*q1);
    }
    printf("Case %lld: %lld\n",k++,x);
    }
  return 0;
}
