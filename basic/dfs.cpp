#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int vis[100];
vector<int> v[100],v1;
void dfs(int k)
{
	
		vis[k]=1;
		//cout<<k<<" ";
		for (int i : v[k])
		{
				if(vis[i])continue;
				else{dfs(i);}
		}
		v1.push_back(k);
}
int main()
{

	int i,j,k;
	int n,m;
	int x,y;
	cin>>n>>m;
	for ( i = 0; i < m; ++i)
	{
		cin>>j>>k;
		v[j].push_back(k);
		//v[k].push_back(j);
	}
	
	for (i = 1,k=0; i <= n; ++i)
	{
		if(!vis[i])dfs(i);
	}
	for ( i = v1.size()-1; i >= 0; --i)
	{
		cout<<v1[i]<<" ";
	}
	return 0;
}