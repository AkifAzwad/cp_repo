#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int n,t;
	int ans;
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],cur;
		for ( i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		cur=a[0];
		for ( i = 1,ans = 1; i < n; ++i)
		{

			if(a[i]<=cur)
				{
					cur=min(a[i],cur);
					ans++;
				}
		}
		cout<<ans<<endl;
	}

	return 0;
}