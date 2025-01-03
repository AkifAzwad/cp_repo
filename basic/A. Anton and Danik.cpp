#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int n,a,b;
	a=b=0;
	cin>>n;
	string s;
	string :: iterator it; 
	cin>>s;
	for( it=s.begin();it!=s.end();it++)
	{
		if(*it=='A')a++;
		else b++;
	}
	if(a>b)cout<<"Anton";
	else if(a<b)cout<<"Danik";
	else cout<<"Friendship";
	return 0;
}