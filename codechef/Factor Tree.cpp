#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int vis[100];
vector<int> v[100];
void dfs(int k)
{
	
		vis[k]=1;
		//cout<<k<<" ";
		for (int i : v[k])
		{
				if(vis[i])continue;
				else{dfs(i);}
		}
		//v1.push_back(k);
}
int main()
{

	int i,j,k;
	int n;
	//std::vector<int> v[50];
	cin>>n;
	for ( i = 1; i < n; ++i)
	{
		cin>>j>>k;
		v[j].push_back(k);
		//v[k].push_back(j);
	}
	/*for ( i = 1; i < n; ++i)
	{
		cout<<i<<" ";
		for ( j = 0; j < v[i].size(); ++j)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}*/
	return 0;
}