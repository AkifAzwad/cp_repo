#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int a[10][10];

int pwr(int x)
{
	int sum=1;
	for (int i = 0; i < x; ++i)
	{
		sum*=2;
	}
	return sum;
}
int query(int l,int r)
{
	int k,z,y;
	z=r-l+1;
	k=floor(log2(z));
	y=pwr(k);
	return __gcd(a[l][k],a[l+z-y][k]);
}
int main()
{

	int i,j,k;
	int x,y;
	int n;
	int z,z1;

	cin>>n;
	int arr[n];
	x=n;
	y=floor(log2(n))+1;
	//int a[x][y];
	for ( i = 0; i < n; ++i)
	{
		cin>>arr[i];
		a[i][0]=arr[i];
	}
	
	for ( j = 1; j < y; ++j)
	{
		z=pwr(j-1);
		cout<<z<<endl;
		for ( i = 0; i+(2*z)-1 < x; ++i)
		{
			a[i][j]=__gcd(a[i][j-1],a[i+z][j-1]);
				
		}
	}
	z1=0;
	for ( j = 0; j < y; ++j)
	{
		if(j!=0)z=pwr(j-1);
		else z=0;
		for ( i = 0; i+(2*z)-z1 < x; ++i)
		{
			cout<<a[i][j]<<" ";
			
		}
		if(i>0)z1=1;
		cout<<endl;
	}
	cin>>n;
	for ( i = 0; i < n; ++i)
	{
		cin>>x>>y;
		cout<<query(x,y)<<endl;
	}
	
	return 0;
}