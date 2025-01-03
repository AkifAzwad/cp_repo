#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
ll fact(ll n)
{
	ll i=1,j=0;
	while(n!=0&&n>=5)
	{
		n/=5;
		
		j++;
	}
	return j;
}
int main()
{
	ios::sync_with_stdio(0);
	int t;
	double i,j,k;
	double n;
	double ans;
	ll ans1;
	cin>>t;
	while(t--)
	{
		cin>>n;
	
		k=fact(n);
		
		
			for ( i = 1,ans=0; i <= k; ++i)
			{
				j=pow(5,i);
				ans+=floor(n/j);
			}
	
		ans1=ans;
		cout<<ans1<<endl;
	}

	return 0;
}