#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int vis[105];
std::vector<int> v[105],a;
void dfs(int k)
{
	vis[k]=1;
	for(int i:v[k])
	{
		if(vis[i])continue;
		else dfs(i);
	}
	a.push_back(k);
}
int main()
{
	int i,j,k;
	int m,n;
	
	while(1){
	cin>>n>>m;
	if(n==0&&m==0){break;}
	for ( i = 1; i <= m; ++i)
	{
		cin>>j>>k;
		v[j].push_back(k);
	}
	for(i=1;i<=n;i++)
	{
		if(!vis[i])dfs(i);
	}
	for ( i = a.size()-1; i >= 0; --i)
	{
		cout<<a[i];
		if(i!=0)cout<<" ";
	}
	cout<<endl;
	memset(vis,0,sizeof(vis));
	for (int i = 0; i <= 105; ++i)
	{
		v[i].clear();
	}
	a.clear();
	}
	return 0;
}