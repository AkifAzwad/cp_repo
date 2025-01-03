#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	ll i,j,k;
	ll n,t;
	ll x,y,z;
	cin>>t;
	while(t--){
	cin>>n;
	std::vector< ll > v[n];
	for ( i = 0; i < n; ++i)
	{
		cin>>x>>y>>z;
		v[i].push_back(x);
		v[i].push_back(y);
		v[i].push_back(z);
	}
	ll sum=0,sum1;
	for ( i = 0; i < n; ++i)
	{
		if(v[i][1]%(v[i][0]+1)==0)sum1=(v[i][1]/(v[i][0]+1))*(v[i][2]);
		else sum1=((v[i][1]/(v[i][0]+1))*v[i][2]);
		if(sum1>sum)sum=sum1;
	}
	cout<<sum<<endl;
	}
	return 0;
}