#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;

#define int ll
/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 9;
std::vector<int> v[N];
int cnt[N], vis[N];

//////////methods//////////
int dfs(int x) {
	vis[x] = 1;
	int childs = 1;
	for (auto p : v[x]) {
		if (!vis[p]) {
			// cnt[x]++;
			childs += dfs(p);
		}
	}
	return cnt[x] = childs;
}

int mex(int x) {
	// cout << x << endl;
	vis[x] = 1;
	int mx = 0;
	int sum = 0;
	for (auto p : v[x]) {
		if (!vis[p]) {
			mx = max(mx, mex(p));
		}
	}
	mx += cnt[x];
	return mx;
}

///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		memset(vis, 0, sizeof vis);
		memset(cnt, 0, sizeof cnt);

		for (int i = 0; i < N; ++i) {
			v[i].clear();
		}

		int n; cin >> n;
		int a[n + 1];
		for (int i = 1; i < n; ++i) {
			cin >> a[i];
			v[a[i]].push_back(i + 1);
		}

		dfs(1);
		memset(vis, 0, sizeof vis);

		cout << mex(1) << endl;

	}



	return 0;
}