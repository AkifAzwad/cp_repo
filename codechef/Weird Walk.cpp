#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{
    ll t;
	ll i,j,k;
	ll n,m;

	cin>>t;
	while(t--){
	cin>>n;
	ll a[n],b[n];
	ll sum=0;
	ll x,y;
	for ( i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for ( i = 0; i < n; ++i)
	{
		cin>>b[i];
	}
	x=0;y=0;
	for ( i = 0; i < n; ++i)
	{
		if(x==y&&a[i]==b[i])sum+=a[i];
		else {x+=a[i];y+=b[i];}
	}
	cout<<sum<<endl;
}
	return 0;
}