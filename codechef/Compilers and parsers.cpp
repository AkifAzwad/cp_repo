#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int t;
	ll n;
	ll i,j,k;
	ll ans;
	
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	stack<char> x;
	std::vector< ll > v;
	if(s[0]=='>')cout<<"0\n";
	else{
		ans=0;
	for ( i = 0; i < s.size(); ++i)
	{
		if(s[i]=='<'){
			x.push(s[i]);v.push_back(ans);
		}
		else {
			if(!x.empty()){ans+=2;x.pop();v.pop_back();}
			else break;
		}
	}
		if(!x.empty())
		{
			cout<<v[0]<<endl;
		}
		else cout<<ans<<endl;
	}
}
	return 0;
}