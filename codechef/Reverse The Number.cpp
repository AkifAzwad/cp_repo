#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int n,t;
	int ans;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans=0;
		while(n)
		{
			
			ans=(ans*10)+n%10;
			n/=10;
		}
		cout<<ans<<endl;
	}

	return 0;
}