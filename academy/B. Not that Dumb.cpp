#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 100;
int vis[N];
std::vector<int> v[N];
int a[N];
int mx;
//////////methods//////////
void dfs(int x) {
	vis[x] = 1;
	mx = min(mx, a[x]);
	for (auto p : v[x]) {
		if (!vis[p]) {
			mx = min(mx, a[p]);
			dfs(p);
		}
	}

}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m; cin >> n >> m;

	ll sum = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		sum += a[i];
	}

	while (m--) {
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	ll ans = 0;
	for (int i = 1; i <= n; ++i) {
		if (v[i].size()) {
			if (!vis[i]) {
				mx = INT_MAX; dfs(i);
				// cout << mx << endl;
				if (mx != INT_MAX)ans += mx;
			}
		} else {
			ans += a[i];
		}
	}
	cout << ans << endl;


	return 0;
}