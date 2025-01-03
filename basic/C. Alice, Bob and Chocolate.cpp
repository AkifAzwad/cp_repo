#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{
    ll n;
    ll i,j,k;
    ll sum1,sum2;
    ll x,y;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)cin>>a[i];

    for(k=0,sum1=sum2=x=y=i=0,j=n-1;i!=j;k++)
    {
        if(a[i]+sum1<a[j])
        {
            x++;sum1+=a[i];i++;
            cout<<"1";
        }
        else if(a[i]+sum1>=a[j])
        {
            cout<<"2";
            y++;j--;
            if(a[i]+sum1>a[j])sum1=a[i];
            else {sum1=0;x++;}
        }
        else if(a[j]+sum2<a[i])
        {
            cout<<"3";
            y++;sum2+=a[j];
        }
        else if(a[i]+sum1>=a[j])
        {
            cout<<"4";
            x++;i++;
            if(a[j]+sum2>a[i])sum2=a[j];
            else {sum2=0;y++;}
        }
    }
    //if(a[i]==a[j]&&k!=0)x++;
    cout<<x<<" "<<y;
  return 0;
}
