#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	ll n,t,m;
	ll i,j,k;
	ll ans,sum;
	ll x,y,z;
	cin>>t;
	while(t--){
	cin>>n;
	std::vector<ll> v;
	ll* it;
	ll a[n],b[n];
	for ( i = 0; i < n; ++i)
	{
		cin>>a[i];
		
	}
	z=999999999;ans=0;
	for ( i = 0; i < n; ++i)
	{
		if(z>a[i]){
		ans+=a[i];	
		z=a[i];
		}
		else ans+=z;
	}
	cout<<ans<<endl;
	}	
	return 0;
}