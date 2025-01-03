#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int t;
	ll j,k;
	ll g,n,i,q;
	cin>>t;
	while(t--){
	cin>>g;
	while(g--){
	cin>>i>>n>>q;
		if(n&1)
		{
			if(i==1)
			{
				if(q==1) cout<<n/2<<endl;
				else cout<<(n/2)+1<<endl;
			}
			else
			{
				if(q==1) cout<<(n/2)+1<<endl;
				else cout<<n/2<<endl;
			}
		}	
		else
		{
			cout<<n/2<<endl;
		}
	}
		}
	return 0;
}