#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n];
		for ( i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int ans=INT_MAX;
		int num=a[0];
		for ( i = 0; i < n; ++i)
		{
			if(k%a[i]==0){
			j=(k/a[i])-1;
			ans=min(ans,j);
			num=a[i];
		    }
		}
		if(ans==INT_MAX)cout<<"-1\n";
		else cout<<num<<endl;
	}

	return 0;
}