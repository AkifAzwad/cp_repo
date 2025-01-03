#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int ll

/////////constants/////////
const int mod = 1e9 + 7;
const int N = 1e5 + 9;
std::vector<std::pair<int, int> > v[N];
int vis[N];
int node[N], col;

//////////methods//////////
void dfs(int x) {
	// if (!vis[x])col++;
	vis[x] = 1;
	for (auto p : v[x]) {
		int next, wt;
		next = p.first; wt = p.second;
		if (!vis[next] && wt == 0) {
			// vis[next] = 1;
			dfs(next);
			col++;
		}
	}

}
ll pwr(ll a, ll b, ll m = mod) {
	a %= m;
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}



///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k; cin >> n >> k;
	int cnt = 0;
	int final = pwr(n, k);
	for (int i = 0; i < n - 1; ++i) {
		int x, y, wt;
		cin >> x >> y >> wt;
		if (wt == 0) {
			v[x].push_back({y, wt});
			v[y].push_back({x, wt});
		}
	}

	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		col = 0;
		int cur = 0;
		if (!vis[i]) {
			dfs(i);
			int x = pwr(col + 1, k);
			cur = x % mod;
			final -= cur;
			final += mod;
			final %= mod;
		}

	}
	cout << final << endl;

	return 0;
}