#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
string s[101];
void dfs(int i,int j)
{
	int v;
	s[i][j]='q';
	if(s[i+1][j]=='x'||s[i+1][j]=='@')dfs(i+1,j);
	if(s[i][j+1]=='x'||s[i][j+1]=='@')dfs(i,j+1);
	return;
}
int main()
{

	int i,j,k,l=1;
	int n,t;
	cin>>t;
	while(t--){
	cin>>n;
	for ( i = 0; i < n; ++i)
	{
		cin>>s[i];
	}
	for ( i = 0,k = 0; i < n; ++i)
	{
		for ( j = 0; j < n; ++j)
		{
			if(s[i][j]=='x')
			{
				dfs(i,j);k++;
			}
		}
	}
	printf("Case %d: %d\n",l++,k);
	
	}
	return 0;
}