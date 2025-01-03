#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 105;
std::vector<int> v[N];
int col[N], vis[N];
//////////methods//////////
void dfs(int x) {
	if (col[x] == 0)col[x] = 1;
	vis[x] = 1;
	for (auto p : v[x]) {
		if (!vis[p]) {
			if (col[x] == 1)col[p] = 2;
			// else if (col[x] == 1)col[p] = 2;
			dfs(p);
		}
	}

}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		memset(vis, 0, sizeof vis);
		memset(col, 0, sizeof col);
		for (int i = 0; i < N; ++i) {
			v[i].clear();
		}
		int n; cin >> n;
		for (int i = 0; i < n - 1; ++i) {
			int x, y; cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		dfs(1);
		for (int i = 1; i <= n; ++i) {
			cout << col[i] << " ";
		} cout << endl;
	}

	return 0;
}