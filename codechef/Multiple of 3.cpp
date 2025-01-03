#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{
	int t;
	ll i,j;
	ll k,a,b,c;
	ll sum,ans,x;
	ll n,m;
	cin>>t;
	while(t--){
	cin>>k>>a>>b;
		c=0;
		ans=a+b;
		sum=(2*(a+b))%10+(4*(a+b))%10+(6*(a+b))%10+(8*(a+b))%10;
		k-=2;
		if(k>0)
		{
			ans+=(a+b)%10;
			k--;
		}
		ans+=(k/4)*sum;
		ll p=2;
		m=k%4;
		for ( i = 0; i < m; ++i)
		{
			ans+=(p*(a+b))%10;
			p=(2*p)%10;
		}
		
		if(ans%3==0)cout<<"YES";
		else cout<<"NO";
		if(t!=0)cout<<"\n";
	}

	return 0;
}