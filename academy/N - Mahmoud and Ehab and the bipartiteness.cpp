#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int ll

/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 9;
std::vector<int> v[N];
int vis[N], col[N];
int l, r;
//////////methods//////////
void dfs(int x) {
	vis[x] = 1;
	for (auto p : v[x]) {
		if (!vis[p]) {
			if (col[p] == 0) {
				col[p] = col[x] == 2 ? 1 : 2;
			}
			dfs(p);
		}
	}

}

///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	col[1] = 1;
	dfs(1);

	for (int i = 1; i <= n; ++i) {
		if (col[i] == 1)l++;
		else r++;
	}

	// cout << l << " " << r << endl;
	ll ans = ((l * r)) - ( (n - 1));
	cout << ans << endl;



	return 0;
}