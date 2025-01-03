#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int n,x,t;
	cin>>t;
	while(t--){
	cin>>n;
	int a[n+5];
	for ( i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for ( i = 0,j = 0,k = 1,x = 0; i < n; ++i)
	{
		if(a[i]==1)
		{
			if(k<6&&j>0)
			{
				cout<<"NO\n";
				x=1;
				break;
			}
			else k=1;
			j++;
		}
		else k++;
	}
	if(x==0)cout<<"YES\n";
	}
	return 0;
}