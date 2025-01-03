#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int n,t;
	int x,y;
	cin>>t;
	while(t--){
	cin>>n;

	if(n&1)
	{
		for ( i = 1; i <= n*n; ++i)
		{
			cout<<i<<" ";
			if(i%n==0)cout<<"\n";
		}
	}
	else
	{
		for (x =0,y = i = 1; i <= n*n; ++i)
		{
			if(x==0)cout<<y++<<" ";
			else cout<<y--<<" ";
			if(i%n==0){
				cout<<"\n";
				if(x==1)
				{
					x=0;
					//y--;
					y=(y+n)+1;
				}
				else
				{
					x=1;
					y--;
					y=(y+n);
				}
			}
		}	
	}
}
	return 0;
}