#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int a[]={0,0,0,0,1,1,1,1};
	int b[]={1,2,30,4,3,2,1,0};
	auto x=upper_bound(a,a+8,0)-a;
	
	int i,j,k;
	int l=0,r=7;
	while(l<=r)
	{
		k=(r+l)/2;
		if(b[k-1]<b[k]&&b[k]>b[k+1])
		{
			break;
		}
		else if(b[k-1]>b[k])
		{
			r=k-1;
		}
		else /*if(b[k-1]<b[k]&&b[k]<b[k+1])*/
		{
			l=k+1;
		}
	}
cout<<k+1;
	
	return 0;
}