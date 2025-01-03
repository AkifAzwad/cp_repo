#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	for ( i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int l=0,r=0;
	int sum=0,ans=0;
	for ( i = 0; i < n; ++i)
	{
		sum=max(a[i],sum+a[i]);
		ans=max(sum,ans);
	}
	cout<<ans<<endl;
	return 0;
}