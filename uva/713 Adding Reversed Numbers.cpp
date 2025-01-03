#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
void sum(vector <int> a,vector <int> b)
{
	int i,j,sum,carry=0;
	int x,y,z;
	vector<int> c;
	x=a.size();
	y=b.size();
	z=max(x,y);
	if(x<y)
	{
		i=y-x;
		while(i){
		a.push_back(0);
		i--;
		}	
	}
	else if(y<x)
	{
		i=x-y;
		while(i){
	 	b.push_back(0);
	 	i--;
	 	}
	}
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for ( i = z-1; i >=0 ; i--)
	{
		sum=a[i]+b[i]+carry;
		c.push_back(sum%10);
		carry=sum/10;
		
	}
	if(carry!=0)
	{
		c.push_back(1);
	}
	
	for ( i = 0,j = 0; i <c.size(); i++)
	{
		if(c[i]==0&&j!=0){cout<<c[i];}
		else if(c[i]!=0)
		{
			cout<<c[i];
			j=1;
		}
	}
	cout<<endl;
}
int main()
{
	int i,n;
	
	cin>>n;
	while(n--){
	string a,b;
	cin>>a>>b;
	vector<int> v1,v2;
	for (i = 0; i < a.size(); ++i)
	{
		v1.push_back(a[i]-'0');
	}
	for (i = 0; i < b.size(); ++i)
	{
		v2.push_back(b[i]-'0');
	}
	sum(v1,v2);
	}
	return 0;
}