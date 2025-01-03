#include<bits/stdc++.h>
using namespace std;

const double PI = acos(-1.0);
#define ll long long
std::vector<int> adj[100009];
int ans[100009];
int main()
{

	int i, j, k;
	int n;
	int x = 0;
	cin >> n;
	memset(ans, -1, sizeof(ans));
	for ( i = 1; i < n; ++i)
	{
		cin >> j >> k;
		j--; k--;
		adj[j].push_back(i);
		adj[k].push_back(i);
	}
	for ( i = 0; i < n; ++i)
	{
		if (adj[i].size() > 2)
		{
			ans[adj[i][0]] = 0;
			ans[adj[i][1]] = 1;
			ans[adj[i][2]] = 2;
			x = 3;
			break;
		}
	}
	for ( i = 1; i < n; ++i)
	{
		if (ans[i] == -1)cout << x++ << endl;
		else cout << ans[i] << endl;
	}
	return 0;
}