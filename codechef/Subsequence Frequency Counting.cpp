#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
ll hi=1e9+7;
ll pwr(ll x)
{
	ll ans=1;
	for (ll i = 0; i < x; ++i)
	{
		ans=((ans%hi)*(2%hi))%hi;
	}
	return ans;
}
int main()
{

	ll i,j,k;
	ll n,t;
	//cout<<hi<<endl;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];
		for (i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		ll ans=1;
		ll b[n+1];
		for ( i = n; i > 0; --i)
		{
			b[i]=ans%hi;
			ans=(ans*2);
			
		}
		for ( i = n; i > 0; --i)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}