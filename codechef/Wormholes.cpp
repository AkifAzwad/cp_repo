#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long

int main()
{

	ll i,j,k;
	ll n,x,y;
	

	cin>>n>>x>>y;
	std::vector<ll> v, w1(x),w2(y);
	std::vector< pair <ll,ll> > e;
	for ( i = 0; i < n; ++i)
	{
		cin>>j>>k;
		e.push_back({j,k});     
	}
	ll a,b;
	a=9999999;b=-1;
	for ( i = 0; i < x; ++i)
	{
		cin>>w1[i];
	}

	for ( i = 0; i < y; ++i)
	{
		cin>>w2[i];
	}
	sort(w1.begin(),w1.end());
	sort(w2.begin(),w2.end());
	
	ll ans,l,r;
	ans=9999999;
	for ( i = 0; i < e.size(); ++i)
	{
		l=upper_bound(w1.begin(),w1.end(),e[i].first)-w1.begin();
		l--;
		if(l<0||l>=x)continue;
		r=lower_bound(w2.begin(),w2.end(),e[i].second)-w2.begin();
		//cout<<l<<" "<<r<<endl;
		if(r<0||r>=y)continue;
		
		if(w2[r]-w1[l]+1<ans)ans=w2[r]-w1[l]+1;
	}
	cout<<ans<<endl;
	return 0;
}