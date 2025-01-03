#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	ll i,j,k;
	ll n;
	
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		for ( i = 2,j = 1; i*i <= n; ++i)
		{
			if(n%i==0){j++;
				if(n/i!=i){j++;}
				}
			
		}
		if(n!=1){j++;}
		//cout<<j<<endl;
		if(j%2==0)cout<<"no\n";
		else cout<<"yes\n";
	}
	return 0;
}