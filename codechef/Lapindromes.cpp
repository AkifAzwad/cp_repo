#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int t;
	int x,y;
	cin>>t;
	while(t--)
	{
		string s;
		int a1[26],a2[26];
		memset(a1,0,sizeof(a1));
		memset(a2,0,sizeof(a2));
		cin>>s;
		if(s.size()%2==0)
		{
			x=s.size()/2;
			for (i = 0; i < s.size(); ++i)
			{
					if(i<x){
						a1[s[i]-'a']++;
					}
					else
					{
						a2[s[i]-'a']++;	
					}
			}
		}
		else
		{
			x=s.size()/2;
			for (i = 0; i < s.size(); ++i)
			{
					if(i<x){
						a1[s[i]-'a']++;
					}
					else if(i>x)
					{
						a2[s[i]-'a']++;	
					}
			}	
		}
		for ( i = 0,j = 0; i < 26; ++i)
		{
			if(a1[i]!=a2[i]){
				cout<<"NO\n";
				j=1;
				break;
			}
		}
		if(j==0)cout<<"YES\n";
	}

	return 0;
}