#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
bool isBig(string a,string b)
{
	if(a.size()<b.size())return false;
	else if(a.size()==b.size())
	{
		for (int i = 0; i < a.size(); ++i)
		{
			if(a[i]<b[i])return false;
		}
	}
	else return true;
}
string sub(string a,string b)
{
	int i,carry=0,ans;
	int z;
	string c;
	z=min(a.size(),b.size());
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	
	for (int i = 0; i < z; ++i)
	{
		ans=(a[i]-'0')-(b[i]-'0')-carry;
		if(ans<0)
			{
				ans+=10;
				carry=1;
			}
		else carry=0;

			c.push_back(ans+'0');
	}
	for (int i = b.size(); i < a.size(); ++i)
	{	
		ans=(a[i]-'0')-carry;
		if(ans<0)
			{
				ans+=10;
				carry=1;
			}
		else carry=0;

			c.push_back(ans+'0');	
	}
	reverse(c.begin(), c.end());
	return c;
}
int main()
{
	int k;
	string a,b,c;
	cin>>a>>b;
	if(isBig(a,b)==true)
	{
		c=sub(a,b);
		for (int i = 0,k = 0; i < c.size(); ++i)
		{
			if(c[i]==0&&k!=0)cout<<c[i];
			else if(c[i]!=0)
			{
				cout<<c[i];k=1;
			}
		}
	}
	else 
	{
		c=sub(b,a);
		for (int i = 0,k = 0; i < c.size(); ++i)
		{
			if(c[i]=='0'&&k!=0)cout<<c[i];
			else if(c[i]!='0')
			{
				cout<<c[i];k=1;
			}
		}
	}
	return 0;
}