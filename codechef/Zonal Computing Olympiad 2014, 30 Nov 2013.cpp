#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	ll i,j,k;
	ll n,t;

	while(cin>>n)
	{
		ll a[n],ans;
		for ( i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+i);

		for ( i = 0,ans = 0; i < n; ++i)
		{
			if(a[i]*(n-i)>ans)ans=a[i]*(n-i);
		}
		cout<<ans<<endl;
	}

	return 0;
}