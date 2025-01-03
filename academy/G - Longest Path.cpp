#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 100;
std::vector<int> v[N];
int n, m;
int dp[N];
//////////methods//////////
int dfs(int u) {
	if (dp[u] != -1)return dp[u];
	int ans = 0;
	for (auto p : v[u]) {
		ans = max(ans, 1 + dfs(p));
	}
	return dp[u] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	memset(dp, -1, sizeof(dp));
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int l, r;
		cin >> l >> r;
		v[l].push_back(r);
	}

	int mx = 0;
	for (int i = 1; i <= n; ++i) {
		// cout << dfs(i) << endl;
		mx = max(mx, dfs(i));
	}
	cout << mx << endl;

	return 0;
}