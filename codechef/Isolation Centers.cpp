#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	ll i,j,k;
	ll n,t;
	ll q,c;
	ll a[26];
	cin>>t;
	while(t--)
	{
	string s;
	cin>>n>>q;
	cin>>s;
	
	memset(a,0,sizeof(a));
	for (i = 0; i < s.size(); ++i)
	{
		a[s[i]-'a']++;
	}
	while(q--)
	{
		cin>>c;
		ll z,ans=0;
		for ( i = 0; i < 26; ++i)
		{
			z=min(c,a[i]);
			ans+=(a[i]-z);
		}
		cout<<ans<<endl;
	}
}
	return 0;
}