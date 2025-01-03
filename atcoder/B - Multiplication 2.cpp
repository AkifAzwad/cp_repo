#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	
	 ll i,j,k;
	 ll n;

	cin>>n;
  	ll a[n];
    ll sum=1,sum2=1000000000000000000;
	
	for ( i = 0,j = 0; i < n; ++i)	
	{
		cin>>a[i];
		if(a[i]==0)j=1;
		
	}
	if(j==0){
	
	sort(a,a+n);
	for ( i = n-1,k=0; i > -1; --i)
	{
		
		if(a[i]<=(sum2/sum))
		{
			sum*=a[i];				
		}
		else {k=1;break;}
	}

	if(k!=1){
		ll sum3=sum;
		cout<<sum3<<endl;
	}
	else cout<<"-1\n";
	
	
	}
	else cout<<"0\n";
	return 0;
}