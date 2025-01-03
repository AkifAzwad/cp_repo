#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	ll i,j,k;
	ll n,t;
	ll sum,x,y;
	cin>>t;
	while(t--){
	cin>>n;
	ll a[200000];
	for ( i = 0; i < n; ++i)
	{
		cin>>a[i];
	
	}
	sort(a,a+n);
	for(sum=0,i=n-1,j=0;i>=0;i--,j++)
	{
	
		if(a[i]-j>0)sum+=(a[i]-j);
		
	}
	cout<<(sum)%1000000007;
	if(t!=0)cout<<"\n";
	}
	return 0;
}