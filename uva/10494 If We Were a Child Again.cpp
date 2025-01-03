#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
void div(string a,ll b)
{
	ll i,rem=0,x=0;
	for ( i = 0; i < a.size(); ++i)
	{
		rem=(a[i]-'0')+rem*10;
		if(rem/b!=0)
			{
				x=1;
			}
			if(x==1){cout<<rem/b;}
			rem%=b;
	}
	if(x==0)cout<<"0";
}
ll mod(string a, ll b)
{
	ll i,rem=0,ans=0;
		for ( i = 0; i < a.size(); ++i)
	
	{
		rem=(a[i]-'0')+rem;
		if(rem%b==0)
		{
			ans+=(rem/b);
			
			ans*=10;
			rem=0;
		}
		else
		{
			if(rem>=b){
			ans+=(rem/b);
			
			ans*=10;
			}
			rem%=b;
			rem*=10;
		}
		
	}
		return rem/10;
	
}
int main()
{
	string a;
	char ch;
	ll i,b;
	while(cin>>a>>ch>>b){
	if(ch=='/'){div(a,b);cout<<endl;}
	else cout<<mod(a,b)<<endl;
	}

	return 0;
}