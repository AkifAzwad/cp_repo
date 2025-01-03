#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
pair <ll,ll> dif1(ll p,ll q,ll r,ll a,ll b,ll c)
{
	ll x[3];
	ll i;
	ll j,k;
	x[0]=a-p;x[1]=b-q;x[2]=c-r;
	sort(x,x+3);	
	pair << ll, ll > p;
	//for ( i = 0; i < 3; ++i)
	if(x[0]==x[1]==x[2])
	{
		j=x[0];k=3;
	}
	else if(x[0]==x[1]||x[1]==x[2]||x[2]==x[0])
	{
		k=2;
		if(x[0]==x[1])j=x[0];
		else if(x[1]==x[2])j=x[1];
		else j=x[2];		
	}
	else 
	{
		j=-1;k=-1;
	}
	
	p={j,k};
	return p;
}
pair <ll,ll> dif2(ll p,ll q,ll r,ll a,ll b,ll c)
{
	ll x[3];
	ll i;
	ll j,k;
	x[0]=a/p;x[1]=b/q;x[2]=c/r;
	sort(x,x+3);	
	pair << ll, ll > p;
	//for ( i = 0; i < 3; ++i)
	if(x[0]==x[1]==x[2])
	{
		j=x[0];k=3;
	}
	else if(x[0]==x[1]||x[1]==x[2]||x[2]==x[0])
	{
		k=2;
		if(x[0]==x[1])j=x[0];
		else if(x[1]==x[2])j=x[1];
		else j=x[2];		
	}
	else 
	{
		j=-1;k=-1;
	}
	
	p={j,k};
	return p;
}
int main()
{

	ll i,j,k;
	ll n,m;
	ll p,q,r;
	ll a,b,c;
	ll t;
	ll x,y;

	cin>>p>>q>>r;
	cin>>a>>b>>c;

	ll dif1[3],dif2[3];

	dif1[0]=a-p;dif1[1]=b-q;dif1[2]=c-r;
	sort(dif1,dif1+3);	
	dif1[0]=a/p;dif1[1]=b/q;dif1[2]=c/r;
	sort(dif2,dif2+3);	
	
	for ( i = 0; i < 3; ++i)
	{
		if(dif1[i]!=0)
		{
			x=dif1[i];break;
		}
	}
	if(i==3)
	{
		//we r done;
	}
	for ( j = 0; j < 3; ++j)
	{
		if(dif2[j]!=1)
		{
			y=dif2[j];break;
		}
	}
	if(j==3)
	{
		//we r done;
	}
	
	return 0;
}