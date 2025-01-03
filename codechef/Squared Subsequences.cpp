#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	ll i,j,k;
	ll n,t;
	ll x,y;
	ll l,r;
	ll count;
	cin>>t;
	while(t--){
	cin>>n;
	ll a[100002];
	for ( i = 1; i <= n; ++i)
	{
		cin>>a[i];
	}
	x=0;

	for ( i = 1,j=1,r=0,l=1,count=0; i <= n; ++i)
	{
			y=(a[i]+2);	
			if(y%4==0)
			{
				x++;
				if(x%2==0)
				{
					
					count+=((j-l+1)*(i-j));
					//cout<<count<<endl;
					l=j+1;
					j=i;
					x=1;
				}
				else
				{
					j=i;					
				}
			}
			else if(a[i]%2==0&&x==0)
			{
				l=i+1;
			}
			else if(a[i]%2==0&&x==1)
			{
				r=i-1;
				count+=((j-l+1)*(r-j+1));
				//cout<<l<<" "<<j<<" "<<r<<endl;
				l=i+1;
				x=0;
			}

	}
	if(x==1)
	{
		y=a[i-1]+2;
		if(y%4!=0)count+=((j-l+1)*(i-j));
		else	count+=((j-l+1)*(i-j));
	}
	x=(n*n+n)/2;
	cout<<x-count<<"\n";
	}
	return 0;
}