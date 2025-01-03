#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
struct name
{
	int l,r;
	int x;
};
bool comp(name a,name b)
{
	return a.l<b.l||a.l==b.l&&a.r>b.r;
}
int main()
{

	int i,j,k;
	int n;
	int c,d;
	
	cin>>n;
    int a[n],b[n];
	
	name arr[n];
	for ( i = 0; i < n; ++i)
	{
		cin>>a[i]>>b[i];
		arr[i].l=a[i];
		arr[i].r=b[i];
		arr[i].x=i;
		
	}
	sort(arr,arr+n,comp);
	/*
	for ( i = 0; i < n; ++i)
	{
		cout<<arr[i].l<<":"<<arr[i].r<<endl;
	}
	*/
	
	k=0;
	c=d=-1;
	

	for ( i = 0; i+1 < n; ++i)
	{
		if(arr[i].x!=arr[i+1].x)
		{
			c=arr[i].x;
			d=arr[i+1].x;
			if(a[c]<=a[d]&&b[c]>=b[d])
			{
				
				cout<<d+1<<" "<<c+1<<endl;
				k=1;
				break;
			}
			
			
		}
		
	}
	if(k!=1)
	{
		cout<<"-1 -1\n";
	}

	
	return 0;
}