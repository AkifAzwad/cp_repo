#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	ll i,j,k;
	ll n,t;

	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];
		for (i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+i);
		ll dif=1e9;
		for ( i = 1; i < n; ++i)
		{
			dif=min(dif,a[i]-a[i-1]);
		}
		cout<<dif<<"\n";
	}

	return 0;
}